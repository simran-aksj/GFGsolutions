class Solution {
  public:
   int help(int curr,int prev, int n,vector<int>& nums,vector<vector<int>>& dp )
     {
         if(curr==n)return 0;
         if(dp[curr][prev+1]!=-1)return dp[curr][prev+1];
         int nottake= 0+help(curr+1,prev,n,nums,dp);
         int take=0;
         if(prev==-1||nums[prev]<nums[curr]){
            take=1+help(curr+1,curr,n,nums,dp);
         }
         dp[curr][prev+1]=max(nottake,take);
         return dp[curr][prev+1]; 
     }
    int lis(vector<int>& arr) {
        // code here
        int n=arr.size();
        vector<vector<int>>dp(n+1,vector<int>(n+1,-1));
        return help(0,-1,n,arr,dp);
    
    }
};