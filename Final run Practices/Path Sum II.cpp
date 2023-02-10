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
void solve(vector<vector<int>>&ans,vector<int>temp,TreeNode* root, int targetSum){
    if(root==NULL)
    return;
    if(root->left==NULL && root->right==NULL){
        temp.push_back(root->val);
        targetSum-=root->val;
        if(targetSum==0)
        ans.push_back(temp);
        return;
    }
     temp.push_back(root->val);
     if(root->left!=NULL){
        solve(ans,temp, root->left,targetSum-root->val); 
     }
     if(root->right!=NULL){
        solve(ans,temp, root->right,targetSum-root->val); 
     }
}
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        vector<vector<int>>ans;
        vector<int>temp;
        solve(ans,temp,root,targetSum);
        return ans;
    }
};
