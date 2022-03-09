# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def removeNthFromEnd(self, head: Optional[ListNode], n: int) -> Optional[ListNode]:
        curr = head
        count = 0

        while curr:
            curr = curr.next
            count += 1
            if count == n:
                delayed = ListNode(0, head)
            if count > n:
                delayed = delayed.next

        if count == n:
            return head.next

        delayed.next = delayed.next.next
        return head