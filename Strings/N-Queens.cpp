class Solution {
public:
bool possible(int col, int row,vector<string>temp,int n){
    int rows=row;
    int cols=col;
    while(col>=0 && row>=0){
        if(temp[row][col]=='Q')
        return false;
       row--;
       col--;
    }
     row=rows;
     col=cols;
    while(col>=0){
        if(temp[row][col]=='Q')
        return false;
        col--;
    }
    row=rows;
     col=cols;
    while(col>=0 && row<n){
        if(temp[row][col]=='Q')
        return false;
       row++;
       col--;
    }
    return true;
}
 void solve(int col,vector<string>temp,vector<vector<string>>&ans,int n){
     if(col>=n){
         ans.push_back(temp);
         return;
     }
     for(int i=0;i<n;i++){
         if (possible(col,i,temp,n)){
               temp[i][col]='Q';
            solve(col+1,temp,ans,n);
             temp[i][col]='.';   
         }
     }
 }
    vector<vector<string>> solveNQueens(int n) {
        vector<vector<string>>ans;
        vector<string>temp(n,"");
        string s(n,'.');
        for(int i=0;i<n;i++){
            temp[i]=s;
        }
        int col=0;
        solve(col,temp,ans,n);
        return ans;
    }
};
