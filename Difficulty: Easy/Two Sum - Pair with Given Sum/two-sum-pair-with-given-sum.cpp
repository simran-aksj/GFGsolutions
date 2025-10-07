class Solution {
  public:
    bool twoSum(vector<int>& arr, int target) {
        // code here
        unordered_map<int,int>mpp;
        int rem;
        for(int i=0;i<arr.size();i++)
        {
            rem=target-arr[i];
            if(mpp.find(rem)!=mpp.end())
            {
                return true;
            }
            mpp[arr[i]]=i;
        }
        return false;
    }
};