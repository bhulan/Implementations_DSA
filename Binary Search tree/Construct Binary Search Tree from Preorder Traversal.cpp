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
   TreeNode* solve(vector<int>& preorder,int &i,int high){
       if(i==preorder.size() || preorder[i]>high)
       return NULL;
       TreeNode* node=new TreeNode(preorder[i++]);
       node->left=solve(preorder,i,node->val);
       node->right=solve(preorder,i,high);
       return node;
   }
    TreeNode* bstFromPreorder(vector<int>& preorder) {
        int i=0;
       int high=INT_MAX;
       return solve(preorder,i,high);
    }
};
