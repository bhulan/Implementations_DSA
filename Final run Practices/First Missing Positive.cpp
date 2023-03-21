class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        int ans;
        set<int>s;
        for(int i=0;i<nums.size();i++){
            s.insert(nums[i]);
        }
        int n=s.size();
        int k=1;
        while(k<=n){
            if(s.find(k)==s.end())
            return k;
            else
            k++;
        }
        return n+1;
    }
};
