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
    ListNode* rotateRight(ListNode* head, int k) {
        if(head == NULL || head->next == NULL) return head;
        ListNode* cur = head;
        ListNode* prev = NULL;
        int c=0;
        while (cur) { c++; cur = cur -> next; }
        cur = head;
        if (k==0 or k%c==0 or k==c) return head;

        if (c<k) {
            while (c<k) {
                k=k-c;
            }
        }
        for (int i =0;i<k;i++) {
            prev = NULL;
            cur = head;
            while (cur->next) {
                prev = cur;
                cur = cur -> next;
            }
            cur -> next = head;
            prev->next = NULL;
            head = cur;
        }
        return head;
    }
};