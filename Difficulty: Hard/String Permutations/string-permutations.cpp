class Solution {
  public:
    // Complete this function
   void solve(string S,vector<string>&ans,int i)
   {
       if(i>=S.size())
       {
           ans.push_back(S);
           return;
       }
       //op.push_back(S[i]);
       for(int j=i;j<S.size();j++)
       {
           swap(S[i],S[j]);
           solve(S,ans,i+1);
           swap(S[i],S[j]);
       }
   }
    vector<string> permutation(string S) {
        // Your code here
        vector<string>ans;
        //string op;
        solve(S,ans,0);
        sort(ans.begin(),ans.end());
        return ans;
    }
};