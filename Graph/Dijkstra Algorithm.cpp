class Solution
{
	public:
	//Function to find the shortest distance of all the vertices
    //from the source vertex S.
    vector <int> dijkstra(int V, vector<vector<int>> adj[], int S)
    {
        // Code here
         priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>pq;
        vector<int>dijk(V,1000);
        dijk[S]=0;
        pq.push({0,S});
        while(!pq.empty()){
            int weight=pq.top().first;
            int node=pq.top().second;
            pq.pop();
            for(auto it:adj[node]){
                int adjweight=it[1];
                int adjnode=it[0];
                if(weight+adjweight<dijk[adjnode]){
                    dijk[adjnode]=weight+adjweight;
                    pq.push({dijk[adjnode],adjnode});
                }
            }
        }
        return dijk;
    }
};
