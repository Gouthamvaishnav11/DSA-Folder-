#include <iostream>
#include <vector>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int val){
        data = val;
        next = NULL;
    }
};

class CircularLinkedList{
    Node *head;
    Node *tail;

public:
    void circularlist(){
        head = tail = NULL;
    }

    // popfront
    void insertathead(int val){
        Node *newNode = new Node(val);

        if (head == NULL){
            head = tail = newNode;
            tail->next = head;
        }
        else{
            newNode->next = head;
            head = newNode;
            tail->next = head;
        }
    }

    // insert at tail
    void insertattail(int val){
        Node* newNode = new Node(val);
        if(head == NULL){
            head = tail= newNode;
            tail->next = head;

        }
        else{
            newNode -> next = head;
            tail-> next = newNode;
            tail= newNode;
        }
    }

    // delete at head
    void deleteathead(){
        if(head == NULL){
            cout<<"the circular linkedlist is empty";
            return;
        }

        // if the circular linked list having single node then we have to delete it dynamically
        else if(head == tail){
            delete head;
            head= tail= NULL;
        }
        else{ //2 or more
           Node* temp = head;
           head= head-> next;
           tail->next = head;

           temp-> next = NULL;
           delete temp;
        }
    }

    // delete the element form the tail
    void deleteattail(){
        if(head == NULL){
            return;

        }
        else if(head == tail){
            delete head;
            head= tail= NULL;
        }
        else{
            Node* temp = tail;

            Node* prev = head;

            while(prev ->next != tail){
                prev= prev -> next;
                
            }

            tail = prev;
            tail->next = head;
                
            temp->next = NULL;
            delete temp;
        }
    }

    void printDlinkedlist(){ // O(n)
        Node *temp = head;

        cout << head->data << "->";
        temp = head->next;

        while (temp != head){
            cout << temp->data << " -> ";
            temp = temp->next;
        }
        cout << temp->data << endl;
    }
};

int main(){
    CircularLinkedList cll;

    cll.insertathead(1);
    cll.insertathead(2);
    cll.insertathead(3);
    cll.insertathead(4);
    cll.insertathead(5);
    cll.insertathead(6);


    cll.printDlinkedlist();

    return 0;
}