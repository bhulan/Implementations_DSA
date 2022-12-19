



---------------------------------------240/292 testcase passed-------------------------------


class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        vector<vector<int>>ans;
        for( int i=0;i<nums.size();i++){
            if(i>0 && nums[i]==nums[i-1])
            continue;
             for( int j=i+1;j<nums.size();j++){
            if(j>i+1 && nums[j]==nums[j-1])
            continue;
             int l=j+1;
             int r=nums.size()-1;
             int sumrem=target-(nums[i]+nums[j]);
             while(l<r){
                  int sum=nums[l]+nums[r];
                 if(sum<sumrem)
                 {
                     l++;
                   
                 }
                 else if(sum>sumrem){
                      r--;  
                 }
                 else{
                    ans.push_back({nums[i],nums[j],nums[l],nums[r]});
                      while(l<r && nums[l]==nums[l+1])
                     l++;
                      while(l<r && nums[r]==nums[r-1])
                     r--;
                     r--;
                     l++;
                 }
                 
             }
            
        }
        }
        return ans;
    }
};



-----------------------------OR---------
    
    class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        vector<vector<int>>ans;
        for(unsigned int i=0;i<nums.size();i++){
            if(i>0 && nums[i]==nums[i-1])
            continue;
             for(unsigned int j=i+1;j<nums.size();j++){
            if(j>i+1 && nums[j]==nums[j-1])
            continue;
            unsigned int l=j+1;
            unsigned int r=nums.size()-1;
            unsigned int sumrem=target-(nums[i]+nums[j]);
             while(l<r){
                 unsigned int sum=nums[l]+nums[r];
                 if(sum<sumrem)
                 {
                     l++;
                   
                 }
                 else if(sum>sumrem){
                      r--;  
                 }
                 else{
                    ans.push_back({nums[i],nums[j],nums[l],nums[r]});
                      while(l<r && nums[l]==nums[l+1])
                     l++;
                      while(l<r && nums[r]==nums[r-1])
                     r--;
                     r--;
                     l++;
                 }
                 
             }
            
        }
        }
        return ans;
    }
};
