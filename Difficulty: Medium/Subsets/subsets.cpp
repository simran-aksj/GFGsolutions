class Solution {
  public:
  void solve(vector<int>& nums,vector<int> otpt,vector<vector<int>>& ans,int indx)
 {
    if(indx>=nums.size())
    {
        ans.push_back(otpt);
       return ;
    }

    //exclude (not take)
    solve(nums,otpt,ans,indx+1);
    
    //include(take)
    int element= nums[indx];
    otpt.push_back(element);
    
    solve(nums,otpt,ans,indx+1);
 }
    vector<vector<int>> subsets(vector<int>& arr) {
        // code here
        vector<vector<int>> ans;
        vector<int>otpt;
        int indx=0;
        solve(arr,otpt,ans,indx);
        return ans;
    }
};