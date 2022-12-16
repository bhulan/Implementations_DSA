class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int ans=0;
        int sum=INT_MAX;
        for(int i=0;i<prices.size();i++){
            sum=min(sum,prices[i]);
            ans=max(ans,prices[i]-sum);
        }
        return ans;
    }
};
