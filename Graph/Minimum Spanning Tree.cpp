class Solution
{
	public:
	//Function to find sum of weights of edges of the Minimum Spanning Tree.
    int spanningTree(int V, vector<vector<int>> adj[])
    {
      priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>pq;
        vector<int>vis(V,0);
        pq.push({0,0});
        int sum=0;
        while(!pq.empty()){
            int weight=pq.top().first;
            int node=pq.top().second;
                pq.pop();
                sum+=weight;
                if(vis[node]==1)
                continue;
                
                vis[node]==1;
                
                for(auto it:adj[node]){
                    int adjnode=it[0];
                    int adjweight=it[1];
                    if(!vis[adjnode])
                    pq.push({adjweight,adjnode});
                }
        }
        // code here
        return sum;
    }
};
