class Solution {
  public:
    int maxSubarraySum(vector<int>& arr, int k) {
        // code here
        int i=0,j=0;
        int maxi=INT_MIN;
        int sum=0;
        while(j<arr.size())
        {
            sum+=arr[j];
            if(j-i+1<k)j++;
            else if(j-i+1==k)
            {
                maxi=max(maxi,sum);
                sum-=arr[i];
                i++;j++;
            }
             
             
        }
        return maxi;
    }
};