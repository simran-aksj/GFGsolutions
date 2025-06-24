class Solution {
  public:
    long long int fibSum(long long int N) {
        const int mod=1e9+7;
        // code here
        
        if(N==0)return 0;
        if(N==1)return 1;
        
        vector<long long int>dp(N+1);
        dp[0]=0;
        dp[1]=1;
        long long int sum=dp[0]+dp[1];
        for(int i=2;i<=N;i++)
        {
            dp[i]=(dp[i-1]+dp[i-2])%mod;
            sum=(sum+dp[i])%mod;
        }
        return sum; // code here
        
    }
};