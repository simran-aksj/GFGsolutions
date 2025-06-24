class Solution {
  public:
  int help(int n,int w, vector<int> &val, vector<int> &wt,vector<vector<int>>&dp)
    {
        if(n==0||w==0)return dp[n][w]=0;
        if(dp[n][w]!=-1)return dp[n][w];
        if(wt[n-1]<=w)
        {
            return dp[n][w]=max(
                val[n-1]+ help(n-1,w-wt[n-1],val,wt,dp),
            help(n-1,w,val,wt,dp));
            
        }
        else if(wt[n-1]>w)
        dp[n][w]=help(n-1,w,val,wt,dp);
      return dp[n][w];    
    }
    int knapsack(int W, vector<int> &val, vector<int> &wt) {
        // code here
        int n=val.size();
        vector<vector<int>>dp(n+1,vector<int>(W+1,-1));
        return help(n,W,val,wt,dp);
    }
};