# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def mergeTwoLists(self, list1: Optional[ListNode], list2: Optional[ListNode]) -> Optional[ListNode]:
        if (not list1) and (not list2):
            return None
    
        nodes = []
        
        while list1 != None or list2 != None:
            if list1 and list2:
                if list1.val <= list2.val:
                    nodes.append(list1)
                    list1 = list1.next
                elif list2.val < list1.val:
                    nodes.append(list2)
                    list2 = list2.next
            elif list1:
                nodes.append(list1)
                list1 = list1.next
            elif list2:
                nodes.append(list2)
                list2 = list2.next
        
        for i in range(1, len(nodes)):
            nodes[i - 1].next = nodes[i]
        
        return nodes[0]
