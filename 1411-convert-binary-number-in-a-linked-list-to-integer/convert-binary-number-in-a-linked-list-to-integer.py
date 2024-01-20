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
        a=[]
        temp = head;
        while (temp) :
            a.append(temp.val)
            temp=temp.next
        s=0 
        n=len(a)-1
        for i in a:
            s=s+(2**n)*i
            n=n-1
        return s