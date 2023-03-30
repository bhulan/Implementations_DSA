1.Validate Binary Search Tree.cpp
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
    bool isValidBST(TreeNode* root) {
        if(root==NULL)
        return true;
        isValidBST(root->left);
        ans.push_back(root->val);
        isValidBST(root->right);

        for(int i=0;i<ans.size()-1;i++){
            if(ans[i]>=ans[i+1])
            return false;
        }
        return true;
    }
};
2 search in 2d matrix---------------------------------------------------------------------------------------------------
  class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int row=matrix.size();
        int col=matrix[0].size();
        int l=0,hi=(row*col)-1;
        while(l<=hi){
            int mid=(l+hi)/2;
            if(matrix[mid/row][mid%row]==target)
            return true;
            else if(matrix[mid/row][mid%row]<target)
            l=mid+1;
            else
            hi=mid-1;
        }
        return false;
    }
};
-----------------------------------
  3
