class Solution {
  public:
  bool cheeck(int node,vector<int>&vis,vector<int>&cyc,vector<int> adj[]){
      vis[node]=1;
      cyc[node]=1;
      for(auto it:adj[node]){
          if(!vis[it]){
            if(cheeck(it,vis,cyc,adj))
            return true;
          }
          else if(cyc[node]=1)
          return true;
      }
      cyc[node]=0;
      return false;
  }
    // Function to detect cycle in a directed graph.
    bool isCyclic(int V, vector<int> adj[]) {
        // code here
        vector<int>vis(V,0);
        vector<int>cyc(V,0);
        int start=0;
        for(int i=0;i<V;i++){
            if(!vis[i]){
                if(cheeck(i,vis,cyc,adj))
                return true;
            }
        }
       return false; 
    }
};
