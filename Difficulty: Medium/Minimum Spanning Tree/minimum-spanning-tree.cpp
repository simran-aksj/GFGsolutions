class Solution {
  public:
    // Function to find sum of weights of edges of the Minimum Spanning Tree.
    int spanningTree(int V, vector<vector<int>> adj[]) {
        // code here
        priority_queue<pair<int,int>,
        vector<pair<int,int>>,greater<pair<int,int>>>pq;
        vector<int>vis(V,0);
        //{wt,node}
        pq.push({0,0});
         int sum=0;
        while(!pq.empty())
        {
            auto it=pq.top();
            pq.pop();
            int wt=it.first;
            int node=it.second;
            
            
            if(vis[node]==1) continue;
            vis[node]=1;
            sum+=wt;
            for(auto  it: adj[node])
            {
                int adjnode=it[0];
                int edgeW=it[1];
                if(!vis[adjnode])
                {
                    pq.push({edgeW,adjnode});
                }
            }
        }
        
       return sum; 
    }
};