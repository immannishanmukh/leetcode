# Definition for singly-linked list.
# class ListNode(object):
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution(object):
    def getDecimalValue(self, head):
        """
        :type head: ListNode
        :rtype: int
        """
        result = str(head.val)
        while head.next:
            head = head.next
            result += str(head.val)
        return int(result, 2)
        

    
       


        