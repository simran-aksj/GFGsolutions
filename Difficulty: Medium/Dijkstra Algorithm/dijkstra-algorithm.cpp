// User Function Template
class Solution {
  public:
    vector<int> dijkstra(int V, vector<vector<int>> &edges, int src) {
        // Code here
        //create adj list using edges;
        
        vector<vector<pair<int,int>>>adj(V);
        for(auto &it:edges)
        {
            int u=it[0],v=it[1],w=it[2];
            adj[u].push_back({v,w});
        }
        
        
        // .................use dikstra algorithm.................
        priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
        vector<int>dis(V);
        for(int i=0;i<V;i++) dis[i]=INT_MAX;
        dis[src]=0;
        pq.push({0,src});
        while(!pq.empty())
        {
            int dist=pq.top().first;
            int node=pq.top().second;
            pq.pop();
            for(auto &it: adj[node])
            
            {   int v=it.first;
                int wt=it.second;
                
            
                if(dist+wt<dis[v])
                {
                   dis[v]=dist + wt;
                   pq.push({dis[v],v});
                }
            }
        }
        return dis;
    }
};