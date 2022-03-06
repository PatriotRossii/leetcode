# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def widthOfBinaryTree(self, root: Optional[TreeNode]) -> int:
        if not root:
            return 0

        result = 0
        queue = [(root, 0)]

        while queue:
            count = len(queue)
            start = queue[0][1]
            end = queue[-1][1]

            result = max(result, end - start + 1)
            for i in range(count):
                p = queue[0]
                idx = p[1] - start
                queue.pop(0)

                if p[0].left:
                    queue.append((p[0].left, 2 * idx + 1))
                if p[0].right:
                    queue.append((p[0].right, 2 * idx + 2))

        return result