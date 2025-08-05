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
// class Solution {
//     vector<int> v;
//     void preOrder_traversal(TreeNode* root)
//     {
//         if(root == NULL) return;
//         v.push_back(root->val);
//         preOrder_traversal(root->left);
//         preOrder_traversal(root->right);
//     }
// public:
//     vector<int> preorderTraversal(TreeNode* root) {
//         preOrder_traversal(root);
//         return v;
//     }
// };