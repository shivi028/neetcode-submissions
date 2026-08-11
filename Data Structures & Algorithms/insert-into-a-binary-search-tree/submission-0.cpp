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
    TreeNode* insertIntoBST(TreeNode* root, int val) {
        // no node existed, create tree
        if(root == NULL){
            return new TreeNode(val);
        }

        TreeNode* curr = root;

        while(curr != NULL){
            if(val < curr->val && curr->left != NULL){
                curr = curr->left;
            }
            else if(val > curr->val && curr->right != NULL){
                curr = curr->right;
            } 
            else{
                break;
            }
        }
        
        TreeNode* temp = new TreeNode(val);
        if(val < curr->val){
            curr->left = temp;
        }
        else{
            curr->right = temp;
        }

        return root;
    }
};