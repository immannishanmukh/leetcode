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
    ListNode *detectCycle(ListNode *head) {
        // ListNode* t = head;
        // int x  = INTMAX;
        // ListNode* t2 = NULL;
        // while (t) {
        //     if (t ->val = x) { t2 = t ; break;}
        //     t-> val = x;
        //     t=t->next;
        // }
        if (head == NULL or head -> next == NULL) return NULL;
        ListNode* turtle = head;
        ListNode* rabbit = head;

        ListNode* t1 = NULL;
        int f=0;
        ListNode* temp = head;
        while (rabbit and rabbit ->next) {
            
            rabbit = rabbit->next->next;
            turtle = turtle -> next;
            if (rabbit == turtle ) {f=1 ; break ;}
        }
        int c=0;
        if (f==0) return NULL;
        while (turtle != temp) {
                c++;
                turtle = turtle -> next;
                temp = temp -> next;
        }
        return turtle;
    } 
};