class Solution {
  public:
 
    void depthfs(vector<vector<int>>& adj,vector<int>&df,int visited[],int node)
    {
        visited[node]=1;
        df.push_back(node);
        for(auto it:adj[node])
        {  if(!visited[it])
            depthfs(adj,df,visited,it);
        }
    }
    vector<int> dfs(vector<vector<int>>& adj) {
        // Code here
          vector<int>df;
          int n=adj.size();
          int visited[n]={0};
          int start=0;
          depthfs(adj,df,visited,start);
          return df;
    }
};