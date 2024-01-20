# Definition for singly-linked list.
# class ListNode(object):
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution(object):
    def middleNode(self, head):
        """
        :type head: ListNode
        :rtype: ListNode
        """
        # temp = temp2 = head;
        # if temp2.next == None:
        #     return temp;
        # if temp2.next.next == None:
        #     return temp.next;
        # while (  temp2.next or temp2.next.next):
        #     temp2=temp.next.next;
        #     temp = temp.next;
        # return temp

        temp = head;
        a=0
        if temp.next == None:
            return temp;
        if temp.next.next == None:
            return temp.next;
        while (temp):
            a=a+1
            temp = temp.next;
        temp = head;
        a=a//2
        while (a!=0):
            temp = temp.next
            a=a-1
        return temp
    