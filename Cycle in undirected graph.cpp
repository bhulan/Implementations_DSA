class Solution {
  public:
    // Function to detect cycle in an undirected graph.
    bool cheeck(int node,int parent,vector<int>&vis,vector<int>adj[]){
        vis[node]=1;
        for(auto it:adj[node]){
            if(!vis[it]){
            if(cheeck(it,node,vis,adj))
            return true;
            }
            else if(it!=parent)
            return true;
        }
        return false;
    }
    bool isCycle(int V, vector<int> adj[]) {
        // Code here
        vector<int>vis(V,0);
        for(int i=0;i<V;i++){
            if(!vis[i]){
                if(cheeck(i,-1,vis,adj))
                return true;
            }
        }
        return false;
    }
};
