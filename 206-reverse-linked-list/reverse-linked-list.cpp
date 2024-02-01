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
    ListNode* prev = NULL ;
    ListNode* next = NULL;
    ListNode* rev(ListNode * cur) {
        if(cur==NULL) {
            return prev;
        }
        next = cur->next;
        cur->next = prev;
        prev = cur;
        return rev(cur = next);
    }
    ListNode* reverseList(ListNode* head) {
        // ListNode* prev = NULL ;
        // ListNode* cur = head;
        // ListNode* next = NULL;
        // while (cur) {
        //     next = cur -> next ;
        //     cur -> next = prev;
        //     prev  = cur ;
        //     cur = next;
        // }
        // head = prev;
        // return head;

        head = rev (head);
        return head;
    }
};