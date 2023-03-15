class Solution {
public:
    bool canJump(vector<int>& nums) {
        int ind=0,reachable=0;
      for(int i=0;i<nums.size();i++){
          if(i>reachable)
          return false;
          else
          reachable=max(reachable,i+nums[i]);
      }  
      
      return true;
    }
};
