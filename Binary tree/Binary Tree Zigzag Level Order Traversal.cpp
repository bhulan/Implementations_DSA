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
   vector<vector<int>>ans;
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        if(root==NULL)
        return ans;
        queue<TreeNode*>q;
        bool cheek=true;
        q.push(root);
        while(!q.empty()){
            int n=q.size();
            vector<int>temp(n);
            for(int i=0;i<n;i++){
                TreeNode* node=q.front();
               q.pop();
               int ind=(cheek)?i:(n-1-i);
               temp[ind]=node->val;
               if(node->left!=NULL)
               q.push(node->left);
               if(node->right!=NULL)
               q.push(node->right);
            }
            ans.push_back(temp);
            cheek=!cheek;;
        }
        return ans;
    }
};
