class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        //sort thr 
        sort(nums.begin(),nums.end());
        vector<vector<int>>result;
        for(int i=0;i<nums.size()-2;i++){
            //cheek duplicates
            if(i==0 ||((i>0 ) && (nums[i]!=nums[i-1]))){
             int lo=i+1,hi=nums.size()-1,sum=-nums[i];
            while(lo<hi){
              if(nums[lo]+nums[hi]==sum){
                  vector<int>ans;
                  ans.push_back(nums[i]);
                   ans.push_back(nums[lo]);
                   ans.push_back(nums[hi]);
                   result.push_back(ans);
                  //cheek duplicates
                  while(lo<hi && nums[lo]==nums[lo+1])
                      lo++;
                   while(lo<hi && nums[hi]==nums[hi-1])
                      hi--;
                  
                  lo++;
                  hi--;
              }
               else if(nums[lo]+nums[hi]<sum)
                   lo++;
                else
                    hi--;
            }
            }
        }
        return result;
        
    }
};
