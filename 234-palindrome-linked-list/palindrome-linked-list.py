# Definition for singly-linked list.
# class ListNode(object):
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution(object):
    def isPalindrome(self, head):
        """
        :type head: ListNode
        :rtype: bool
        """
        temp = head
        s=""
        while (temp):
            s=s+str(temp.val)
            temp=temp.next
        if (s==s[::-1]):
            return True
        else:
            return False