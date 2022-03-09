# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def removeNthFromEnd(self, head: Optional[ListNode], n: int) -> Optional[ListNode]:
        length = 0
        ptr = head

        while ptr != None:
            ptr = ptr.next
            length += 1

        n = length - n
        if n == 0:
            return head.next

        before = None
        ptr = head

        for i in range(n):
            if i == n - 1:
                before = ptr
            ptr = ptr.next

        if before != None:
            before.next = ptr.next

        return head