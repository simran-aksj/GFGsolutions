class Solution {
  public:
   const int mod=1e9+7;
    int fib(int N) {
        // code here
        
        if(N==0)return 0;
        if(N==1)return 1;
        
        vector<int>dp(N+1);
        dp[0]=0;
        dp[1]=1;
        for(int i=2;i<=N;i++)
        {
            dp[i]=(dp[i-1]+dp[i-2])%10;
        
        }
        int ans= dp[N];
        return ans;
    }
};