# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def middleNode(self, head: Optional[ListNode]) -> Optional[ListNode]:
        # First example: [1, 2, 3]; len // 2 = 1 -- correct
        # Second example: [1, 2, 3, 4]; len // 2 = 2 -- correct

        length = 0
        ptr = head
        while ptr != None:
            ptr = ptr.next
            length += 1

        for _ in range(length // 2):
            head = head.next

        return head