#include <iostream>
#include <vector>

class Solution {
public:
    struct TreeNode {
        int val;
        TreeNode* left;
        TreeNode* right;
        TreeNode() : val(0), left(nullptr), right(nullptr) {}
        TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
        TreeNode(int x, TreeNode* left, TreeNode* right) : val(x), left(left), right(right) {}
    };

    TreeNode* insert(TreeNode* root, int val) {
        if (!root) {
            return new TreeNode(val);
        }
        if (val < root->val) {
            root->left = insert(root->left, val);
        } else {
            root->right = insert(root->right, val);
        }
        return root;
    }

    TreeNode* fun(TreeNode* root, std::vector<int>& nums, int l, int r) {
        if (l > r) {
            return nullptr;
        }
        int mid = (l + r) / 2;
        root = insert(root, nums[mid]);
        root->left = fun(root->left, nums, l, mid - 1);
        root->right = fun(root->right, nums, mid + 1, r);
        return root;
    }

    void preorder(TreeNode* root, std::vector<int>& ans) {
        if (root == nullptr) {
            return;
        }
        ans.push_back(root->val);
        preorder(root->left, ans);
        preorder(root->right, ans);
    }

    std::vector<int> sortedArrayToBST(std::vector<int>& nums) {
        if (nums.size() == 0) {
            return {};
        }
        TreeNode* root = nullptr;
        root = fun(root, nums, 0, nums.size() - 1);
        std::vector<int> ans;
        preorder(root, ans);
        return ans;
    }
};
