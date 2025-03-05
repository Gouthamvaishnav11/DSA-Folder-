#include<iostream>
#include<vector>

using namespace std;

class Node{
public:
    int data;
    Node* next;
    Node* prev;

    Node(int val){
        data  = val;
        next=prev= NULL;
        
    }

};
class DoublyList{

    Node*head;
    Node* tail;

public:
    DoublyList(){
       head= tail= NULL;
    }
    //push_front
     void push_front(int val){
        Node* newNode = new Node(val);

        if(head == NULL){
            head = tail = newNode;
        }else{
            newNode->next = head;
            head->prev=newNode;
            head= newNode;
        }
    }

    // pushback
    void push_back(int val){
        Node*newNode = new Node(val);

        if(head == NULL){
            head = tail = newNode;

        }
        else{
            newNode ->prev= tail;
            tail->next = newNode;
            tail = newNode;
        }
    }

    // pop_front
    void pop_front(){ //O(1)
       if(head == NULL){
            cout<<"Doublylinkedlist is empty\n";
            return ;
        }
        
        Node* temp = head;
        head = head -> next;
        
        if(head != NULL){
            head->prev =NULL;
        }

        temp->next = NULL;
        delete temp;
    }


    // pop_back
    
    void pop_back(){ //O(n)
        if(head == NULL){
            cout<<"Linkedlist is empty " ;
            return ;
        }
        Node* temp = tail;
        tail= tail-> prev;

        if(tail != NULL){
            tail-> next = NULL;
        }
        temp -> prev = NULL;
        delete temp;
       

    }
    void printDlinkedlist(){ //O(n)
        Node* temp = head;

        while(temp != NULL){
            cout<< temp->data<<" <-> " ;
            temp = temp->next;
        }
        cout<<"NULL\n";
    }



};

int main(){

    DoublyList dll;

    dll.push_front(1);
    dll.push_front(2);
    dll.push_front(3);
    dll.push_front(4);
    dll.push_front(5);

    

    

    dll.printDlinkedlist();






    return 0;


}