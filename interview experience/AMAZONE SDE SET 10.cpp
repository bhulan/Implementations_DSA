 NON REAPETING
 class Solution {
public:
    int lengthOfLongestSubstring(string s) {
      int st=0,end=0,ans=0,p=0;
      set<char>sett;
      while(st<s.size()){
          if(sett.find(s[st])==sett.end()){
              sett.insert(s[st]);
              p=sett.size();
              ans=max(p,ans);
              st++;
          }
          else{
              sett.erase(s[end]);
              end++;
          }
      }  
      return ans; 
    }
}; ---------------------------------------------------------
   K SUM IN  BST
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
 void inorder(TreeNode* root,vector<int>&ans){
     if(root==NULL)
     return;
     inorder(root->left,ans);
     ans.push_back(root->val);
     inorder(root->right,ans);
 }
    bool findTarget(TreeNode* root, int k) {
        vector<int>ans;
        inorder(root,ans);
        for(int i=0;i<ans.size()-1;i++){
            for(int j=i+1;j<ans.size();j++){
                if(ans[i]+ans[j]==k)
                return true;
            }
        }
        return false;
    }
};
