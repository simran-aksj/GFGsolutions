// User function template for C++

class Solution {
  public:
    // Function to find the days of buying and selling stock for max profit.
    int stockBuySell(vector<int> &arr) {
        // code here
           int maxpft=0;
        //vector<vector<int>> dp(n+1, vector<int>(m+1, 0));
        for(int i=1;i<arr.size();i++)
        {  if(arr[i]>arr[i-1])
            maxpft+= arr[i]-arr[i-1];
        }
        return maxpft;
    }
};