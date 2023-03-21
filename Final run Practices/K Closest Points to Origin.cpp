class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        vector<pair<double,vector<int>>>ans;
        vector<int>temp;
        for(int i=0;i<points.size();i++){
            temp= points[i];
            int x=temp[0];
            int y=temp[1];
            double dis=sqrt(pow((x-0),2)+pow((y-0),2));
            ans.push_back({dis,temp});
        }
        sort(ans.begin(),ans.end());
        vector<vector<int>>res;
        for(int i=0;i<k;i++){
           res.push_back(ans[i].second);
        }
        return res;
    }
};
