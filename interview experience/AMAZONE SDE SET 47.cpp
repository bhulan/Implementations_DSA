1.Next Permutation

class Solution {
public:
    void nextPermutation(vector<int>& nums) {
       next_permutation(nums.begin(),nums.end());
    }
};
------------------------------------------------
  2.
class Solution {
public:
int solve(TreeNode* root, int &height){
    if(root==NULL)
    return 0;
    int lh=solve(root->left,height);
    int rh=solve(root->right,height);
    height=max(height,(lh+rh));
    return 1+max(lh,rh);
}
    int diameterOfBinaryTree(TreeNode* root) {
        int height=0;
        solve(root,height);
        return height;
    }
};  

** REVERSE PAIR
class Solution {
public:
    int reversePairs(vector<int>& nums) {
        int ans=0;
        for(int i=0;i<nums.size()-1;i++){
            for(int j=i+1;j<nums.size();j++){
                if(nums[i]>nums[j]*2)
                ans++;
            }
        }
        return ans;
    }
};-----------------------------------------------------------------------
  NEXT GREATER ELEMENT
  class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
      unordered_map<int,int>m;
        vector<int>ans;
        stack<int>st;
        st.push(-1);
        for(int i=nums2.size()-1;i>=0;i--){
            int cur=nums2[i];
            while(st.top()<cur && st.top()!=-1){
                st.pop();
            }
            m[cur]=st.top();
            st.push(cur);
        }
        for(auto it:nums1){
            int val=m[it];
            ans.push_back(val);
        }
        return ans;
    }
};
----------------------------------------------------------------------
  LONGEST COMMOM PREFIX
  class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string ans="";
        for(int i=0;i<strs[0].size();i++){
            char ch=strs[0][i];
            bool p=true;
            for(int j=1;j<strs.size();j++){
                if(ch!=strs[j][i] ){
                    p=false;
                    break;
                }
               
            }
             if(p)
                ans.push_back(ch);
            else
                break;
        }
        return ans;

    }
};
