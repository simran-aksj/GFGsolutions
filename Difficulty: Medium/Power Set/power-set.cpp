class Solution {
  public:
  void PrintSubsequences(string &s ,string output ,int i ,vector<string> &ans){
    // base case
        if(i>=s.length()){
             if (!output.empty()) // Exclude the empty string
                ans.push_back(output);
            return;
        }
 
    //exclude
PrintSubsequences(s,output,i+1,ans);
 
    //include
    output.push_back(s[i]);
    PrintSubsequences(s,output,i+1,ans);
}
 
 
vector<string> AllPossibleStrings(string s){
    // Code here
    vector <string> ans ;
     string output = "";  // Define output separately
        PrintSubsequences(s, output, 0, ans);
    sort(ans.begin(), ans.end());
        return ans;
    
}
};