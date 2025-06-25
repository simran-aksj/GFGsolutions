class Solution {
  public:
    int maximumSumSubarray(vector<int>& arr, int k) {
        // code here
          int sum=0;
        int maxi=INT_MIN;
        int i=0,j=0;
        while(j<arr.size())
        {
            sum+=arr[j];
            if(j-i+1<k)j++;
            else if(j-i+1==k)
            {
                maxi=max(sum,maxi);
                sum-=arr[i];
                i++;
                j++;
            }
        }
        return maxi;
    }
};