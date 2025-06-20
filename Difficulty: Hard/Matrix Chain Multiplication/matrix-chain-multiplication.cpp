class Solution {
  public:
    int help(int i,int j,vector<vector<int>> &dp,vector<int> &arr)
    {   int minCost=INT_MAX;
        if(i>=j)return 0;
        if(dp[i][j]!=-1)return dp[i][j];
        
        for(int k=i;k<=j-1;k++)
        {
            int temp= help(i,k,dp,arr)+help(k+1,j,dp,arr)+ arr[i-1]*arr[k]*arr[j];
            minCost=min(temp,minCost);
        }
        dp[i][j]=minCost;
        return dp[i][j];
    }
    int matrixMultiplication(vector<int> &arr) {
        // code here
        int n=arr.size();
        vector<vector<int>>dp(n+1,vector<int>(n+1,-1));
        
        int ans=help(1,n-1,dp,arr);
        
        
        
        
        return ans;
    }
};