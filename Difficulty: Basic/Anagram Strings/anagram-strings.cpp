// User function Template for C++
class Solution {
  public:
    int areAnagram(string S1, string S2) {
        // code here
        int ans;
       if(S1.size()!=S2.size())return 0;
       
       unordered_map<char,int>mpp;
        for( auto &it:S1)
       {
           mpp[it]++;
       }
       for( auto &it:S2)
       {
           mpp[it]--;
       }
        for(auto &it:mpp)  
         {
             if(it.second!=0)return 0;
             
         }
       
       
       return 1;
    }
};