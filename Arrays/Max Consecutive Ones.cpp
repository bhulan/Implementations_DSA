class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
       int ans=0;
       int len=0;
     
        for(int i=0;i<nums.size();i++){
            if(nums[i]==1){
                len++;
                ans=max(len,ans);
            }
            else
            len=0;
        }
        return ans;
    }
};
