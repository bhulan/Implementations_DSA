class Solution {
public:
    long long zeroFilledSubarray(vector<int>& nums) {
       long long currrnum=0;
        long long ans=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==0)
            currrnum++;
        else{
            ans+=currrnum*(currrnum+1)/2;
            currrnum=0;
        }
        }
        ans+=currrnum*(currrnum+1)/2;
        return ans;
    }
};
