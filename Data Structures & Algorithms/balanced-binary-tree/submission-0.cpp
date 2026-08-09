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
    // int height(TreeNode* root){
    //     if(root == NULL) return 0;
    //     int l = height(root->left);
    //     int r = height(root->right);
    // }
    int height(TreeNode* root){
        if(root == NULL) return 0;

        int _left = height(root->left);
        if(_left == -1) return -1;

        int _right = height(root->right);
        if(_right == -1) return -1;

        if(abs(_left - _right) > 1) return -1;
        return 1 + max(_left, _right);
    }

    bool isBalanced(TreeNode* root) {
        if(root == NULL || root->left == NULL && root->right == NULL) return true;
        
        return height(root) != -1;
    }
};
