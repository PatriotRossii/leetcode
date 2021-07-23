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
        std::vector<int> result;
        if(root == nullptr) return result;

        std::vector<TreeNode*> queue{root};

        while(!queue.empty()) {
            TreeNode* current = queue.back(); queue.pop_back();
            result.push_back(current->val);

            if(current->right != nullptr) {
                queue.push_back(current->right);
            }
            if(current->left != nullptr) {
                queue.push_back(current->left);
            }
        }

        return result;
    }
};

int main() { }
