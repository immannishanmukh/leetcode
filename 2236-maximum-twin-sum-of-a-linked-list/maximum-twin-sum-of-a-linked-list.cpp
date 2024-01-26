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
    int pairSum(ListNode* head) {
        ListNode* temp = head;
        ListNode* temp1 = head;
        ListNode* temp2 = head;
        int c =0;
        while (temp) { c++ ; temp = temp -> next ;}
        c=c/2-1;
        while (c--) {
            temp1 = temp1 -> next;
        }
        temp2 = temp1 -> next;
        temp1->next = NULL;
        temp1 = head;
        int m1=0,m2=0;
        ListNode* head2 = temp2;
        ListNode *cur = head2 , *next = NULL , *prev = NULL;
        while (cur) {
            next = cur -> next;
            cur->next = prev;
            prev = cur ;
            cur = next;
        }
        head2 = prev;
        temp2 = head2;
        while (temp1 and temp2) {
            m2 = temp1->val + temp2 -> val;
            if (m1 < m2) m1 = m2;
            temp1 = temp1 -> next;
            temp2 = temp2 -> next;
        }
        return m1;
    }
};