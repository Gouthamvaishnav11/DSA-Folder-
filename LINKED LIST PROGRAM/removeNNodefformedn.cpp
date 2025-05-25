#include<iostream>
#include<vector>
using namespace std;

struct ListNode {
    int val;
    ListNode *next;
     ListNode() : val(0), next(nullptr) {}
      ListNode(int x) : val(x), next(nullptr) {}
     ListNode(int x, ListNode *next) : val(x), next(next) {}
 };

 ListNode* removeNthFromEnd(ListNode* head, int n) {
    ListNode* temp=new ListNode(0,head);
    ListNode * fast=temp;
    ListNode* slow=temp;

    for(int i=0;i<=n ;i++){
        fast=fast->next;

    }
    while(fast != nullptr){
        fast=fast->next;
        slow=slow->next;

    }
     ListNode* toDelete = slow->next;
        slow->next = slow->next->next;

        // Free memory (optional in some environments)
        delete toDelete;

        // Return updated list
        return temp->next;



 }
 int main(){
    
 }
