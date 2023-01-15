class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<int>ans;
        unordered_map<int,int>m;
        for(int i=0;i<nums.size();i++){
            m[nums[i]]++;
        }
        priority_queue<pair<int,int>>q;
        for(auto it:m){
           q.push({it.second,it.first});
        }
       for(int i=0;i<k;i++){
           ans.push_back(q.top().second);
           q.pop();
       }
       return ans;
    }
};
