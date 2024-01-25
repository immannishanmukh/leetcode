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
    ListNode* mergeNodes(ListNode* head) {
        ListNode* cur = head;
        vector <int> v;
        int s=0;
        while (cur) {
          if (cur->val == 0 ) {
              v.emplace_back(s);
              s=0;
          }
          s=s+cur -> val;
          cur = cur -> next;
        }
        v.erase(v.begin());
        cur = head;
        ListNode*  prev = NULL;
        for (auto i : v) {
            prev = cur;
            cur -> val = i;
            cur = cur -> next;
        }
        prev -> next = NULL;
        
        return head;
    }
};