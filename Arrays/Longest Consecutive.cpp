class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        if(nums.size()==0){
            return 0;
        }
        int c=1,ans=1;
        for(int i=0;i<nums.size()-1;i++){
            
             if(nums[i]+1==nums[i+1]){
            c++;
            }
             else if(nums[i]!=nums[i+1])
             c=1;
            
              ans=max(ans,c);
        }

        return ans;
    }
};
