class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        unordered_map<int,int>map;
       vector<int>ans;
       int n=nums.size();
       for(int i=0;i<nums.size();i++){
           map[nums[i]]++;
       }
       for(auto it:map){
           if(it.second>n/3){
            
           int k= it.first;
           ans.push_back(k);
           }
       } 
       return ans;
    }
};
