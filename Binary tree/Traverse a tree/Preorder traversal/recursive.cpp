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
    std::vector<int> preorderTraversal(TreeNode* root) {
        std::vector<int> result{};

        if(root != nullptr) {
            result.push_back(root->val);
        } else {
            return result;
        }

        if(root->left != nullptr) {
            std::vector<int> traverseResult = preorderTraversal(root->left);
            std::move(
                traverseResult.begin(),
                traverseResult.end(),
                std::back_inserter(result)
            );
        }
        if(root->right != nullptr) {
            std::vector<int> traverseResult = preorderTraversal(root->right);
            std::move(
                traverseResult.begin(),
                traverseResult.end(),
                std::back_inserter(result)
            );
        }
        return result;
    }
};

int main() {
    Solution solution;
    solution.preorderTraversal(nullptr);
}
