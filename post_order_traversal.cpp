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
//     void postOrder_traversal(TreeNode* root)
//     {
//         if(root == NULL) return;
//         postOrder_traversal(root->left);
//         postOrder_traversal(root->right);
//         v.push_back(root->val);
//     }
// public:
//     vector<int> postorderTraversal(TreeNode* root) {
//         postOrder_traversal(root);
//         return v;
//     }
// };