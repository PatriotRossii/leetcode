#include <bits/stdc++.h>

class Solution {
public:
    int widthOfBinaryTree(TreeNode* root) {
        if(root == NULL) {
            return 0;
        }

        int result = 1;
        queue<pair<TreeNode*, int>> queue;

        queue.push({root, 0});
        while(!queue.empty()) {
            int count = queue.size();
            int start = queue.front().second;
            int end = queue.back().second;

            result = max(result, end - start + 1);

            for(int i = 0; i < count; ++i) {
                pair<TreeNode*, int> p = queue.front();
                int idx = p.second - start;
                queue.pop();

                if(p.first->left != NULL) {
                    queue.push({p.first->left, (long long) 2 * idx + 1});
                }
                if(p.first->right != NULL) {
                    queue.push({p.first->right, (long long) 2 * idx + 2});
                }
            }
        }
        return result;
    }
}