class Solution {
  public:
   int help(string &s1, string &s2,vector<vector<int>>&dp,int m,int n)
    {
        if(m==0||n==0)return 0;
        if(dp[m][n]!=-1)return dp[m][n];
        if(s1[m-1]==s2[n-1])
        {
            dp[m][n]= 1+help(s1,s2,dp,m-1,n-1);
        }
        else
        dp[m][n]=max(help(s1,s2,dp,m-1,n),help(s1,s2,dp,m,n-1));
    
        return dp[m][n];
    }

  
    int lcs(string &s1, string &s2) {

        // code here
        int m=s1.size();
        int n=s2.size();
        vector<vector<int>>dp (m+1,vector<int>(n+1,-1));
        return help(s1,s2,dp,m,n);
    }
};
