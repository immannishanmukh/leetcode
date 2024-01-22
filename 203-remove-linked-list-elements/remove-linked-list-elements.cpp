/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x+), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) {
        ListNode* temp = head;
        ListNode* pre = NULL;
        while (temp != NULL and temp->val==val) {
            head = head -> next;
            temp= temp -> next;
        }
        int c=0;
        temp= head;
        pre = NULL;
        while (temp) {
            if (temp->val==val) {
                pre -> next = temp -> next;
                temp = temp -> next;
            }
            else {
                pre = temp;
                temp = temp -> next;
            }
        }
        return head;

        // ListNode* pre = NULL;
        // ListNode* cur = head;
        // while (cur) {
        //     if(cur ->val == val) {
        //         if(pre == NULL) {
        //             cur = cur -> next;
        //             head = head -> next;
        //         }
        //         else {
        //             pre->next = cur -> next ;
        //             cur = cur -> next;
        //         }
        //     }
        //     else {
        //         pre = cur ;
        //         cur = cur -> next;
        //     }
        // }
        // return head;
    }
};