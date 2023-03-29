class Solution {
public:
    static bool cmp(vector<int> &a,vector<int> &b){
        return a[1]<b[1];
    }
    int eraseOverlapIntervals(vector<vector<int>>& v) {
        sort(v.begin(),v.end(),cmp);
        int ans = 0,e = v[0][1];
        for(int i = 1; i < v.size(); i++){
            }else
            e = v[i][1];
        }
        return ans;
    }
};
