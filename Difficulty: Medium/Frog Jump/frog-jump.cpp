class Solution {
  public:
  int help(vector<int>& arr, vector<int>&dp,int n){
      int r=INT_MAX;
      if(n==0)return 0;
      if(dp[n]!=-1)return dp[n];
      int l=help(arr,dp,n-1)+ abs(arr[n]-arr[n-1]);
      if(n>1)
        r=help(arr,dp,n-2)+ abs(arr[n]-arr[n-2]);
      dp[n]=min(l,r);
      return dp[n];
  }
    int minCost(vector<int>& height) {
        // Code here
        int n=height.size();
        vector<int>dp(n+1,-1);
        return help(height,dp,n-1);
    }
};