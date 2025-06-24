class Solution {
  public:
    bool areAnagrams(string& s1, string& s2) {
        // code here
            
       if(s1.size()!=s2.size())return false;
       
       unordered_map<char,int>mpp;
        for( auto &it:s1)
       {
           mpp[it]++;
       }
       for( auto &it:s2)
       {
           mpp[it]--;
       }
        for(auto &it:mpp)  
         {
             if(it.second!=0)return false;
             
         }
       
       
       return true;
    
    }
};