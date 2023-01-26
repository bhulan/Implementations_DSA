class Solution{
    public:
    void solve(int row,int col,vector<string>&ans,string s,vector<vector<int>>&temp,int n,vector<vector<int>> &m){
        if(row==n-1 && col==n-1){
            ans.push_back(s);
            return ;
        }
        
        //down
        if(row+1<n && !temp[row][col] && m[row+1][col]==1){
            temp[row][col]==1;
            solve(row+1,col,ans,s+'D',temp,n,m);
            temp[row][col]==0;
        }
        //left
        if(col-1>=0 && !temp[row][col] && m[row][col-1]==1){
            temp[row][col]==1;
            solve(row,col-1,ans,s+'L',temp,n,m);
            temp[row][col]==0;
        }
                //right
        if(col+1<n && !temp[row][col] && m[row][col+1]==1){
            temp[row][col]==1;
            solve(row+1,col,ans,s+'R',temp,n,m);
            temp[row][col]==0;
        }
        if(row-1>=0 && !temp[row][col] && m[row-1][col]==1){
            temp[row][col]==1;
            solve(row+1,col,ans,s+'U',temp,n,m);
            temp[row][col]==0;
        }
    }
    vector<string> findPath(vector<vector<int>> &m, int n) {
        // Your code goes here
        vector<string>ans;
        vector<vector<int>>temp(n,vector<int>(n,0));
        string s="";
        if(m[0][0]==1){
            solve(0,0,ans,s,temp,n,m);
        }
        return ans;
    }
};
