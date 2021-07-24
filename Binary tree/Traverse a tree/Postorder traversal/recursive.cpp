#include <vector>

#include <algorithm>
#include <iterator>

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;

    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

class Solution {
public:
    std::vector<int> postorderTraversal(TreeNode* root) {
        std::vector<int> result;
        if(root == nullptr) return result;

        if(root->left != nullptr) {
            std::vector<int> values = postorderTraversal(root->left);
            std::move(
                std::make_move_iterator(values.begin()),
                std::make_move_iterator(values.end()),
                std::back_inserter(result)
            );
        }
        if(root->right != nullptr) {
            std::vector<int> values = postorderTraversal(root->right);
            std::move(
                std::make_move_iterator(values.begin()),
                std::make_move_iterator(values.end()),
                std::back_inserter(result)
            );
        }
        result.emplace_back(root->val);

        return result;
    }
};
