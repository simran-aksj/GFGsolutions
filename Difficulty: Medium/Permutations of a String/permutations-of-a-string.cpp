class Solution {
  public:
    void solve(string &s,vector<string>&ans, int i)
    {
        //base condition
        if(i>=s.size())
        {
            ans.push_back(s);
            return;
        }
         for(int j=i;j<s.size();j++)
         {
             swap(s[j],s[i]);
             solve(s,ans,i+1);
             swap(s[j],s[i]);
         }
    }
    vector<string> findPermutation(string &s) {
        // Code here there
       vector<string>ans;
       int index=0;
       //string output=" ";
        solve(s,ans,index);
        sort(ans.begin(),ans.end());
         ans.erase(unique(ans.begin(), ans.end()), ans.end());
        return ans;
    }
    
};
