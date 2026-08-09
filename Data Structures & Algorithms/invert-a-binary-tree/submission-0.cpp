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
    // TreeNode* invert(TreeNode* temp){
        
    //     retur
    // }

    TreeNode* invertTree(TreeNode* root) {
        if(root == NULL) return NULL;

        TreeNode* _left = invertTree(root->left);
        TreeNode* _right = invertTree(root->right);

        root->left = _right;
        root->right = _left;

        return root;
    }
};
