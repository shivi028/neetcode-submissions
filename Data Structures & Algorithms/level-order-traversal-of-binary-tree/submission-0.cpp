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
    vector<vector<int>> levelOrder(TreeNode* root) {
        // BFS queue
        if(root == NULL){
            return {};
        }
        vector<vector<int>>result;
        queue<TreeNode*>q;
        q.push(root);

        while(!q.empty()){

            int currentLevel = q.size();
            vector<int>temp;

            for(int i=0; i<currentLevel; i++){
                TreeNode* node = q.front();
                q.pop();

                temp.push_back(node->val);

                if(node->left) q.push(node->left);
                if(node->right) q.push(node->right);
            }
            result.push_back(temp);
        }
        return result;
    }
};
