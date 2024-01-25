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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
         ListNode* t1 = headA;
          ListNode* t2 =  headB;
          int c1=0,c2=0;
          while (t1) { c1++ ; t1 = t1 -> next; }
          while (t2) { c2++ ; t2 = t2 -> next; }
          int x;
          x =abs(c1-c2);
           t1 = headA;
           t2 =  headB;
          if (c1 < c2 and c1!=c2) {
                while(x--) {
                    t2 = t2 -> next;
                }
          }
          else if (c2<c1 and c1!=c2) {
              while(x--) {
                    t1 = t1 -> next;
                }
          }

          while (t1 and t2) {
              if (t1 == t2) return t1;
              t1 = t1-> next;
              t2 = t2 -> next;
          }
          return NULL;
    }
};