class Solution {
public:
void dfs(vector<vector<int>>&vis,vector<vector<char>>& grid,int n,int m,int i,int j){
    if(i<0 || j<0 || i>=n || j>=m || vis[i][j]==1 || grid[i][j]=='0' )
    return;
    vis[i][j]=1;
    dfs(vis,grid,n,m,i-1,j);
    dfs(vis,grid,n,m,i,j-1);
    dfs(vis,grid,n,m,i+1,j);
    dfs(vis,grid,n,m,i,j+1);
}
    int numIslands(vector<vector<char>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        int ans=0;
        vector<vector<int>>vis(n,vector<int>(m,0));
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(!vis[i][j] && grid[i][j]=='1'){
                    dfs(vis,grid,n,m,i,j);
                    ans++;
                }
            }
        }
        return ans;
    }
};
