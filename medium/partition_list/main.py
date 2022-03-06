# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def partition(self, head: Optional[ListNode], x: int) -> Optional[ListNode]:
        before = []
        after = []

        while head:
            if head.val < x:
                before.append(head)
            else:
                after.append(head)
            head = head.next
        
        result = []
        for i in range(len(before)):
            if i != (len(before) - 1):
                before[i].next = before[i + 1]
            result.append(before[i])
        for i in range(len(after)):
            if i != (len(after) - 1):
                after[i].next = after[i + 1]
            result.append(after[i])

        if before and after:
            before[-1].next = after[0]
        if after:
            after[-1].next = None
    
        return result[0] if result else None