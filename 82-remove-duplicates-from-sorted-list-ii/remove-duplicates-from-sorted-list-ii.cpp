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
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode *trash = new ListNode(-1);
        trash->next = head;
        ListNode *cur = head;
        ListNode *prev = trash;
        while (cur) {
            if (cur->next && cur -> val == cur -> next -> val ) {
                while (cur -> next != NULL and cur -> val == cur -> next -> val) {
                    cur = cur -> next;
                }
                prev -> next = cur -> next;
            }
            else {
                prev = cur;
            }
            cur = cur -> next;
        }
        head = trash -> next;
        return head;
    }
};