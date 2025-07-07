// User function Template for C++

class Solution {
   
  public:
    void solve(vector<int>&nums,vector<int>&subset,vector<vector<int>>&ans,int i) 
     {
         //ordered_set<int>st;
         if(i>=nums.size())
         {
             ans.push_back(subset);
             return;
         }
    
         //.....inclusde.....//
         //int incl=nums[i];
         vector<int> op2 = subset;
          op2.push_back(nums[i]);
          solve(nums,op2,ans,i+1);
          while(i+1<nums.size() && nums[i]==nums[i+1])i++;
          solve(nums,subset,ans,i+1);// exclude kardoo
         
     }
    vector<vector<int>> printUniqueSubsets(vector<int>& nums) {
        // Write your code here
        sort(nums.begin(), nums.end());
        vector<vector<int>> ans;
        vector<int>subset;
    
        solve(nums,subset,ans,0);
        return ans;
    }
};