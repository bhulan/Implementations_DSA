class Solution {
public:
bool dfs(int node,int colour,vector<vector<int>>& graph,vector<int>&vis){
    vis[node]=colour;
    for(auto it:graph[node]){
        if(vis[it]==-1){
            dfs(node,!colour,graph,vis);
        }
        else if(vis[it]==colour)
        return false;

    }
    return true;
}
    bool isBipartite(vector<vector<int>>& graph) {
        int v=graph.size();
        vector<int>vis(v,-1);
        int colour=0;
        for(int i=0;i<v;i++){
            if(vis[i]==-1){
               if(dfs(i,colour,graph,vis)==false)
               return false;
                
            }
        }
        return true;
    }
};
