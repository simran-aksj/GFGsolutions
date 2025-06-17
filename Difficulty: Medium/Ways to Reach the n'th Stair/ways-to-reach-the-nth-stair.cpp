class Solution {
  public:
    int dp[45];
    int help(int i,int n)
    {
        if(i==n)return 1;
        if(i>n)return 0;
         if(dp[i]!=-1)return dp[i];
         int take1=help(i+1,n);
         int take2=help(i+2,n);
         dp[i]=take1+take2;
        
        return dp[i];
    }
    int countWays(int n) {
        // your code here
         memset(dp,-1,sizeof(dp));
         return help(0,n);
    }
};
