// User function Template for C++

class Solution {
  public:
   bool isPalindrome(const string &s, int i, int j)
{
    while (i < j)
    {
        if (s[i++] != s[j--]) return false;
    }
    return true;
}

int help(string &s, vector<int> &dp, int i)
{
    int n = s.size();
    if (i == n) return 0;
    if (dp[i] != -1) return dp[i];

    int mini = INT_MAX;
    for (int j = i; j < n; j++)
    {
        if (isPalindrome(s, i, j))
        {
            int temp = 1 + help(s, dp, j + 1);
            mini = min(mini, temp);
        }
    }

    return dp[i] = mini;
}

int palPartition(string &s)
{
    int n = s.size();
    vector<int> dp(n, -1);
    return help(s, dp, 0) - 1; // subtract 1 because we make 1 extra cut at the end
}

};