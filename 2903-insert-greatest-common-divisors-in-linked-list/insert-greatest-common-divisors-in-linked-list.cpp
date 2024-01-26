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
    int gcd (int a , int b) {
        if (b==0) return a;
        else return gcd (b,a%b);
    }
    ListNode* insertGreatestCommonDivisors(ListNode* head) {
        ListNode* temp = head;
        while (temp -> next) {
            int x  = gcd (temp -> val , temp -> next -> val) ;
            ListNode* trash = new ListNode(x);
            trash -> next  = temp -> next;
            temp -> next = trash;
            temp = temp -> next -> next;
        }
        return head;
    }
};