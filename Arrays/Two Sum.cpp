class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
       for(int i=0;i<nums.size()-1;i++){
           for(int j=i+1;j<nums.size();j++){
               if(nums[i]+nums[j]==target){
                   return {i,j};
               }
           }
       }
       return {-1,-1}; /////////-------------------never excecuted--------------
    }
};



=----------------------------------optimal------------------------- O(N)

  class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int>m;
         int a=0,b=0;
       for(int i=0;i<nums.size();i++){
            if(m.find(target-nums[i])!=m.end())
            {
                a=m[target-nums[i]];
                b=i;
                break;
            }
          m[nums[i]]=i;
       }
       return {a,b}; 
    }
};
