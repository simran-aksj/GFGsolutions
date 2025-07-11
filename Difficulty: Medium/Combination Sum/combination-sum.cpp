// User function template for C++

class Solution {
  public:
    // Function to find all combinations of elements
    // in array arr that sum to target.
    void help(int idx,int target,vector<int>&arr,vector<int>&op,vector<vector<int>>&ans)
    {
        if(idx==arr.size())
        {
            if(target==0)
            {
                ans.push_back(op);
            }
            return;
        }
        //....take....//
        if(arr[idx]<=target)
        {
            op.push_back(arr[idx]);
            help(idx,target-arr[idx],arr,op,ans);
            op.pop_back();
        }
        help(idx+1,target,arr,op,ans);
    }
    vector<vector<int>> combinationSum(vector<int> &arr, int target) {
        // Your code here
        vector<vector<int>>ans;
        vector<int>op;
        int idx=0;
        help(idx,target,arr,op,ans);
        return ans;
    }
};