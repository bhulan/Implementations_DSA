class Solution {
  public:
  void dfs(int index,vector<int>&vis,vector<int>&ans,int V,vector<int> adj[]){
      ans.push_back(index);
      vis[index]=1;
      for(auto it: adj[index]){
          if(!vis[it]){
              dfs(it,vis,ans,V,adj);
          }
      }
  }
    // Function to return a list containing the DFS traversal of the graph.
    vector<int> dfsOfGraph(int V, vector<int> adj[]) {
        // Code here
    vector<int>vis(V,0);
    vector<int>ans;
    int start=0;
    dfs(start,vis,ans,V,adj);
    return ans;
        
    }
};
