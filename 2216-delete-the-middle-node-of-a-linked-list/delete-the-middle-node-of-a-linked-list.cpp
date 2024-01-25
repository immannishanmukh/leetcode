/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */

class Solution {
public:
    ListNode* deleteMiddle(ListNode* head) {
        if(head==NULL||head->next==NULL){
        head=NULL;
         return head;
        }
        
        ListNode* temp=head;
        ListNode* temp2=temp;
        while(head!=NULL&&head->next!=NULL){
           head=head->next;
           if(head->next!=NULL){
                head=head->next;
              
           } 
           if(head==NULL||head->next==NULL){
             temp->next=temp->next->next;  
           }else{
              temp=temp->next;
           }

        }
        return temp2;
        
    }
};