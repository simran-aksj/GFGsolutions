
class Solution {
  public:
 unordered_map<int, string> mpp = {
    {0, ""}, {1, ""},
    {2, "abc"}, {3, "def"},
    {4, "ghi"}, {5, "jkl"},
    {6, "mno"}, {7, "pqrs"},
    {8, "tuv"}, {9, "wxyz"}
};
    void solve(vector<int> &arr,vector<string> &ans,string op,int idx)
    {
       
        if(idx>=arr.size())
        {
            ans.push_back(op);
            return;
        }
        int num=arr[idx];
        string val= mpp[num];
        if (val.empty()) {
        solve(arr, ans, op, idx + 1);
        return;
    }
        for(int i=0;i<val.size();i++)
        {
            op.push_back(val[i]);
            solve(arr,ans,op,idx+1);
          op.pop_back();
            
        }
        
    }
    
    
    vector<string> possibleWords(vector<int> &arr) {
        // code here
        vector<string>ans;
        string op;
        int ind=0;
        if(arr.size()==0)return ans;
        solve(arr,ans,op,ind);
        return ans;
    }
};