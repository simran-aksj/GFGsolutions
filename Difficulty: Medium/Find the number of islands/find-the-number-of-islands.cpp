class Solution {
  public:
  private:
 void bfs(vector<vector<int>>&vis,vector<vector<char>>& grid,int row,int col )
 {
    vis[row][col]=1;
    queue<pair<int,int>>q;
    q.push({row,col});
    int n=grid.size();
    int m=grid[0].size();

    while(!q.empty())
    {
        int row=q.front().first;
        int col=q.front().second;
        q.pop();
        for(int deltaR=-1;deltaR<=1;deltaR++)
        {
            for(int deltaC=-1;deltaC<=1;deltaC++)
            {   //if (abs(deltaR) + abs(deltaC) != 1) continue;
                int nrow= row+deltaR;
                int ncol= col+deltaC;
                if(nrow>=0 &&nrow<n && 
                   ncol>=0&& ncol<m &&
                   grid[nrow][ncol]=='L'
                   &&!vis[nrow][ncol] )
                  {
                    vis[nrow][ncol]=1;
                    q.push({nrow,ncol});
                  } 
            }
        }
    }
 }
public:
    int countIslands(vector<vector<char>>& grid) {
        // Code here
        int m=grid.size();
        int n=grid[0].size(),cnt=0;
        vector<vector<int>>vis(m,vector<int>(n,0));
        for(int row=0;row<m;row++)
        {
            for(int col=0;col<n;col++)
            {
                if(!vis[row][col] && grid[row][col]=='L')
                {
                    cnt++;
                    bfs(vis,grid,row,col);
                }
            }
        }
        return cnt; 
    }
};