class Solution {
  public:
    int smallestSubWithSum(int x, vector<int>& arr) {
        // Your code goes here
        int i=0,j=0,n=arr.size();
        int sum=0;
        int mini=INT_MAX;
        while(j<n)
        {
            sum+=arr[j];
            
            while(sum>x)
            {
                mini=min(j-i+1,mini);
                sum-=arr[i];
                i++;
            
            }
            j++;
            
        }
       return (mini == INT_MAX) ? 0 : mini;
    }
};