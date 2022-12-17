class Solution {
public:
    int majorityElement(vector<int>& nums) {
       unordered_map<int,int>map;
       int ans;
       int n=nums.size();
       for(int i=0;i<nums.size();i++){
           map[nums[i]]++;
       }
       for(auto it:map){
           if(it.second>n/2)
           ans= it.first;
       } 
       return ans;
    }
};
