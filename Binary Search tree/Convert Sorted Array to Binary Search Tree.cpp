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

 TreeNode* bst(vector<int>& nums,int s,int size){
     if(s>size)
     return NULL;
     int mid=(s+size)/2;
     TreeNode* node=new TreeNode(nums[mid]);
     node->left=bst(nums,s,mid-1);
     node->right=bst(nums,mid+1,size);
     return node;

 }
    TreeNode* sortedArrayToBST(vector<int>& nums) {
         return bst(nums,0,nums.size()-1);
    }
};
