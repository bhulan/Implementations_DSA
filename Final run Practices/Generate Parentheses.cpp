class Solution {
public:
void solve(int open,int close,int n,int index,string temp,vector<string>&ans){
    if(temp.size()==n*2){
        ans.push_back(temp);
        return;
    }
    if(open<n)
    solve(open+1,close,n,index,temp+"(",ans);
    if(close<open)
    solve(open,close+1,n,index,temp+")",ans);
}
    vector<string> generateParenthesis(int n) {
        vector<string>ans;
        string temp="";
        int close=0;
        int open=0;
        int index=0;
        solve(open,close,n,index,temp,ans);
        return ans;

    }
};
