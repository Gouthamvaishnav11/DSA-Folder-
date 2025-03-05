// basic code on linkedlist

#include<iostream>
#include<vector>

using namespace std;

class Node{
public:
    int data;
    Node* next;

    Node(int val){
        data = val;
        next = NULL;

    }


};

class List{
    Node* head;
    Node* tail;

public:  
    List(){
        head = tail =NULL;
    }

    // push front
    void push_front(int val){ // o(1)
        Node*  newNode = new Node(val);
        // Node newNode(val); //static
        if(head ==  NULL){
            head = tail = newNode;
            return ;
        }
        else{
            newNode->next = head;
            head = newNode;
        }

    }

    // function for the push back in linkedlist
    void push_back(int val){ //O(1)
        Node* newNode = new Node(val);

        if(head == NULL){
            head = tail = newNode;
            return ;

        }else{
            tail -> next = newNode;
            tail = newNode;
        }
    }

    // function for  the pop front
    void pop_front(){ //O(1)
        if(head == NULL){
            
            cout<<"linkedlist is empty\n";
            return ;

        }
        Node* temp = head;
        head = head -> next;
        temp->next = NULL;


        delete temp;
    }

    // function for pop back in linked list
    void pop_back(){ //O(n)
        if(head == NULL){
            cout<<"Linkedlist is empty " ;
            return ;
        }
        Node* temp = head;
        while(temp -> next != tail){
            temp = temp ->next;

        }
        temp -> next = NULL;
        delete tail;
        tail = temp;

    }

    //  function for the insert in middele of the linkedlist 
    void insert(int val , int pos){ //O(n)
        if(pos < 0){
            cout<<"Invlaid position in linked list";
            return;

        }

        //  if pos == 0 return pop_front function
        if(pos ==  0){
            push_front(val);
            return;
        }

        Node* temp =  head;
        for(int i =0 ; i<pos-1 ;i++){
            if(temp == NULL){
                cout<<"invalid pos\n";
                return;
            }
            temp = temp->next;
        }
        Node * newNode = new Node(val);
        newNode -> next = temp -> next;
        temp -> next =newNode;

    }

     void printlinkedlist(){ //O(n)
        Node* temp = head;
        while(temp != NULL){
            cout<< temp->data<<" " ;
            temp = temp->next;
        }
        cout<<endl;
     }

    //   to find the value of the linked list  search
    int search(int key){ //O(n)
        Node* temp = head;
        int idx= 0;

        while(temp != NULL){
            if(temp -> data ==  key){
                return idx;
            }
            temp = temp-> next;
            idx++;
        }
        return -1;

    }



};


int main(){
    List l1;
    l1.push_front(1);
    l1.push_front(2);
    l1.push_front(3);
    l1.push_front(4);
    l1.push_front(5);

    l1.insert(6,5);


    l1.printlinkedlist();

    cout<<l1.search(6)<<endl;

    

    return 0;

}