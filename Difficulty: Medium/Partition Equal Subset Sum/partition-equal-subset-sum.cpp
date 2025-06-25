class Solution {
  public:
    bool equalPartition(vector<int>& arr) {
        // code here
        int sum=0;
        for( auto &it:arr)
        {
            sum+=it;
        }
        if(sum%2!=0) return false;
        int n=arr.size();
        int s= sum/2;
        vector<vector<int>> dp(n+1,vector<int>(s+1,-1));
        
        for(int i=0;i<=n;i++){
            for(int j=0;j<=s;j++)
            {
                if(i==0)dp[i][j]=0;
                if(j==0)dp[i][j]=1;
            }
        }
            for(int i=1;i<=n;i++){
                
            for(int j=1;j<=s;j++)
            {
                if(arr[i-1]<=j)dp[i][j]= dp[i-1][j] || dp[i-1][j-arr[i-1]];
                else dp[i][j]=dp[i-1][j];
            }
                
            }
        
        
        return dp[n][s];
    }
    
};