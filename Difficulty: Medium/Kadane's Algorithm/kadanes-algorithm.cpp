class Solution {
  public:
    int maxSubarraySum(vector<int> &arr) {
        // Your code here
        int maxi=INT_MIN;
        int sum=0; 
        for(auto &it:arr)
        {
            sum+=it;
            maxi=max(maxi,sum);
            if(sum<0)sum=0; // edge case;
            }
      return maxi;
    }
};