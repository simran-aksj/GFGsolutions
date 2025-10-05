class Solution {
  private:
    
    bool isSafe(int x,int y,int n,vector<vector<int>>& maze,vector<vector<int>>&vis)
    {
        if((x>=0 &&x<n) && (y>=0 && y<n) && (vis[x][y]==0) && (maze[x][y]==1))
        {
            return true;
        }
        return false;
    }
    void help(vector<vector<int>>& maze,vector<string>&ans,string path,
                vector<vector<int>>&vis,int x,int y)
    {  int n=maze.size();
        
        if(x==n-1 && y==n-1)
        {
            ans.push_back(path);
            return;
        }
         vis[x][y]=1;
        
        
         // down
         int newx=x+1, newy=y;
         if(isSafe(newx,newy,n,maze,vis))
         {
             path.push_back('D');
             help(maze,ans,path,vis,newx,newy);
             path.pop_back();
         }
         // up
          newx=x-1, newy=y;
         if(isSafe(newx,newy,n,maze,vis))
         {
             path.push_back('U');
             help(maze,ans,path,vis,newx,newy);
             path.pop_back();
         }
         // left
          newx=x, newy=y-1;
         if(isSafe(newx,newy,n,maze,vis))
         {
             path.push_back('L');
             help(maze,ans,path,vis,newx,newy);
             path.pop_back();
         }
         // right
          newx=x, newy=y+1;
         if(isSafe(newx,newy,n,maze,vis))
         {
             path.push_back('R');
             help(maze,ans,path,vis,newx,newy);
             path.pop_back();
         }
         vis[x][y]=0;
         
    }
    
    
    
    
    
    
    public:
    vector<string> ratInMaze(vector<vector<int>>& maze) {
        // code here
       
        
        int n = maze.size();
        vector<string>ans;
        int x=0,y=0;
       vector<vector<int>>vis(n,vector<int>(n,0));
     string path="";
      if(maze[0][0]==0)return ans;
      help(maze,ans,path,vis,x,y);
      sort(ans.begin(),ans.end());
        return ans;
    }
};