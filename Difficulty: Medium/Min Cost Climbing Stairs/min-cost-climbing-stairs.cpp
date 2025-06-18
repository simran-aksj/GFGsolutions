//Back-end complete function Template for C++

class Solution {
  public:
  int help(vector<int>& arr, vector<int>&dp,int n){
      
      if(n==0)return arr[0];
       if(n==1)return arr[1];
      if(dp[n]!=-1)return dp[n];
      
      int l=help(arr,dp,n-1);
      
      int r=help(arr,dp,n-2);
      
      dp[n]=min(l,r) + (n == arr.size() ? 0 : arr[n]);
      return dp[n];
  }
    int minCostClimbingStairs(vector<int>& cost) {
        // Write your code here
        int n=cost.size();
      vector<int>dp(n+1,-1);
      return help(cost,dp,n);
    }
};