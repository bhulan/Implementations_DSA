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
 vector<int>ans;
    vector<int> inorderTraversal(TreeNode* root) {
      
        TreeNode* curr=root;
        while(curr!=NULL){
            if(curr->left!=NULL){
                TreeNode* temp=curr->left;
                TreeNode* store=curr->left;
                while(temp->right!=NULL){
                    temp=temp->right;
                }
                temp->right=curr;
                curr->left=NULL;
                curr=store;
            }
            else{
                ans.push_back(curr->val);
                curr=curr->right;
            }
        }
        return ans;

    }
};
