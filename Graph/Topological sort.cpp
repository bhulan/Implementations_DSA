class Solution
{
	public:
	void solve(int node,vector<int>&vis,stack<int>&st,vector<int> adj[]){
	    vis[node]=1;
	    for(auto it:adj[node]){
	        if(!vis[it]){
	            solve(node,vis,st,adj);
	        }
	    }
	    st.push(node);
	}
	//Function to return list containing vertices in Topological order. 
	vector<int> topoSort(int V, vector<int> adj[]) 
	{
	    // code here
	    vector<int>vis(V,0);
	    vector<int>topo;
	    stack<int>st;
	    for(int i=0;i<V;i++){
	        if(!vis[i]){
	            solve(i,vis,st,adj);
	        }
	    }
	    	while(!st.empty()){
	    topo.push_back(st.top());
	    st.pop();
	}
	return topo;
	}

};
