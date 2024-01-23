/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode *head) {
        int x=INT_MAX;
        ListNode* temp= head;
        if (temp == NULL or temp -> next == NULL  or temp -> next -> next == NULL) return false;
        while (temp) {
            if (temp->val != x) {
                temp->val = x;
            }
            else {
                return true;
            }
            temp = temp -> next;
        }
        return false;
    }
};