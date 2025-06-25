class Solution {
  public:
    int longestUniqueSubstr(string &s) {
        // code here
         unordered_map<char,int>mpp;
        int n=s.size();
        int i=0,j=0,cnt=0;
        if(n==1)return 1;
        if(n==0)return 0;    ///////j-i+1== window size()
        while(j<n)
        {
            mpp[s[j]]++;
            if(mpp.size()== (j-i+1))
           { cnt=max(cnt,j-i+1);// kyuki maximum window size return karna h;
             j++;
               
           }
              else if(mpp.size()<j-i+1)
                {
                     while(mpp.size()<j-i+1){
                          mpp[s[i]]--;
                          if(mpp[s[i]]==0) mpp.erase(s[i]);
                          i++;
                     }
                   j++;
                    
                }
        }
      return cnt;    
    }
};
