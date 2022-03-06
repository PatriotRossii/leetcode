class Solution:
    def maxLevelSum(self, root: Optional[TreeNode]) -> int:
        max_sum, current_level, max_level = -float('inf'), 0, 0
        query = [root]

        while query:
            local_sum = 0
            level += 1

            for i in range(len(query)):
                node = query.pop(0)
                sum += node.val

                if node.left:
                    query.append(node.left)
                if node.right:
                    query.append(node.right)

            if local_sum > max_sum:
                max_level, max_sum = level, local_sum

        return max_level
