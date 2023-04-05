1.done
  
  2. DUplicate
  
  class Solution {
public:
    //linked list concept
  int findDuplicate(vector<int>& nums) {
     sort(nums.begin(),nums.end());
      int ans=-1;
      for(int i=0;i<nums.size()-1;i++){
          if(nums[i]==nums[i+1]){
             ans= nums[i];
              break;
          }
      }
        return ans;
    }
};

OR
class Solution {
public:
    //linked list concept
  int findDuplicate(vector<int>& nums) {
     sort(nums.begin(),nums.end());
      int ans=-1;
      for(int i=0;i<nums.size()-1;i++){
          if(nums[i]==nums[i+1]){
             ans= nums[i];
              break;
          }
      }
        return ans;
    }
};
2.
  
  
  TRAPPING RAIN WATER
  
  class Solution {
public:
    int trap(vector<int>& height) {
        int n=height.size();
        int ans=0;
       int left[n];
       int right[n];
       left[0]=height[0];
       right[n-1]=height[n-1];
       for(int i=1;i<n;i++){
           left[i]=max(left[i-1],height[i]);
       } 
       for(int i=n-2;i>=0;i--){
           right[i]=max(right[i+1],height[i]);
       }
       for(int i=1;i<n;i++){
           ans+=min(right[i],left[i])-height[i];
       } 
       return ans; 
    }
};

Binary Search Tree to Greater Sum Tree
lass Solution {
public:
int sum=0;
    TreeNode* bstToGst(TreeNode* root) {
      if(root==NULL)
      return NULL;
      bstToGst(root->right);
      sum+=root->val;
      root->val=sum;
      bstToGst(root->left);
      return root;  
    }
};

Delete Node in a Linked List
class Solution {
public:
    void deleteNode(ListNode* node) {
        swap(node->val,node->next->val);
        node->next=node->next->next;
    }
};
