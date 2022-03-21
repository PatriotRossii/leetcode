/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int maxDepth(TreeNode* root) {
        if(!root) return 0;
        
        queue<TreeNode*> q;
        q.push(root);

        unordered_map<TreeNode*, int> levels;
        levels[root] = 1;

        int max_depth = 1;

        while(!q.empty()) {
            TreeNode* node{q.front()};
            q.pop();

            if(node->left) {
                q.push(node->left);
                max_depth = max(max_depth, levels[node->left] = levels[node] + 1);
            }
            if(node->right) {
                q.push(node->right);
                max_depth = max(max_depth, levels[node->right] = levels[node] + 1);
            }
        }

        return max_depth;
    }
};