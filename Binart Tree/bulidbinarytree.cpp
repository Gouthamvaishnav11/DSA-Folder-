#include<iostream>
#include<vector>
#include<queue>
#include<map>

using namespace std;

class Node{
public:
    int data;
    Node*left;
    Node*right;

    Node(int val){
        data= val;
        left = right= NULL;
    }

};

static int idx=-1;
Node*BuildTree(vector<int>preorder){
    idx++;
    if(preorder[idx] == -1){
        return NULL;
    }

    // root node
    Node* root=new Node(preorder[idx]);

    root->left=BuildTree(preorder);
    root->right=BuildTree(preorder);

    return root;
  
}

// preorder 
void preOrder(Node* root){
    if(root == NULL){
        return ;
    }
    cout<<root-> data<<" ";
    preOrder(root->left);
    preOrder(root->right);

}

// inOrder 
void inorder(Node*root){
     if(root == NULL){
        return ;
    }
    inorder(root->left);
    cout<<root->data<<" ";
     inorder(root->right);

}

// postorder
void postorder(Node* root){
    if(root == NULL){
        return ;
    }
    postorder(root->left);
    postorder(root->right);
    cout<<root->data<<" ";
}

// level order 
void level(Node*root){
    queue<Node*>t;

    t.push(root);
    t.push(NULL);

    while(t.size()>0){
        Node*curr=t.front();
        t.pop();

        if(curr == NULL){ //next line
            if(!t.empty()){
                cout<<endl;
                t.push(NULL);
                continue;
            }
            else{
                break;
            }
        }

        cout<<curr->data<< " ";

        if(curr->left != NULL){
            t.push(curr->left);

        }
        if(curr->right != NULL){
            t.push(curr->right);

        }
    }
    cout<<endl;

}
//height of tree
int height(Node* root){

    
    if(root== NULL){
        return 0;
    }
    int leftht=height(root->left);
    int rightht=height(root->right);
    return max(leftht,rightht)+1;
} 

// count the node
int count(Node* root){
    if(root==NULL){
        return 0;
    }
    int leftcount=count(root->left);
    int rightcount=count(root->right);
    return leftcount+rightcount+1;
    
}

// sum of node
int sum(Node* root){
    if(root==NULL){
        return 0;
    }
    int leftsum=sum(root->left);
    int rightsum=sum(root->right);
    return leftsum+rightsum+root->data;

}

// max and min node in tree
int findmax(Node* root){
    
    if(root==NULL){
        return 0;
    }
    int rootmax=root->data;
    int leftmax=findmax(root->left);
    int rightmax=findmax(root->right);
    return max(rootmax, max( leftmax,rightmax));

}
int findmin(Node* root){
    
    if(root==NULL){
        return 0;
    }
    int rootmin=root->data;
    int leftmin=findmin(root->left);
    int rightmin=findmin(root->right);
    return min(rootmin, min( leftmin,rightmin));

}


void top_view(Node*root){
    queue<pair<Node*,int >>q; //{node, HD}
    map<int , int>m;//<HD , Node val>
    q.push({root,0});

    while(q.size() > 0){
        Node*curr = q.front().first;
        int currHD=q.front().second;
        q.pop();


        if(m.find(currHD) == m.end()){
           m[currHD] = curr->data;
        }


        if(curr->left != NULL){
            q.push({curr->left,currHD-1});
        }
        
        if(curr->right != NULL){
            q.push({curr->right,currHD+1});
        }
    }

    for(auto it :m){
        cout<<it.second<<" ";
    }
    cout<<endl;
}


// bottom view of tree

void bottom_view(Node*root){
    queue<pair<Node*,int >>q; //{node, HD}
    map<int , int>m;//<HD , Node val>
    q.push({root,0});

    while(q.size() > 0){
        Node*curr = q.front().first;
        int currHD=q.front().second;
        q.pop();


           m[currHD] = curr->data;
        


        if(curr->left != NULL){
            q.push({curr->left,currHD-1});
        }
        
        if(curr->right != NULL){
            q.push({curr->right,currHD+1});
        }
    }

    for(auto it :m){
        cout<<it.second<<" ";
    }
    cout<<endl;
}
int main(){
    vector<int>preorder={1,2,-1,-1,3,4,-1,-1,5,-1,-1};

    Node* root=BuildTree(preorder);

    top_view(root);
    bottom_view(root);

    // preOrder(root);

    // inorder(root);
    // postorder(root);
    // cout<<endl;
    // level(root);

   
// cout<<"height: "<< height(root)<<endl;

// cout<<"count of node " <<count(root)<<endl;
// cout<<"sum of node " <<sum(root)<<endl;
// cout<<"max of tree  " <<findmax(root)<<endl;
// cout<<"min of tree  " <<findmin(root)<<endl;
    return 0;

}

