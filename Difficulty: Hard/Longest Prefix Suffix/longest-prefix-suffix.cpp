class Solution {
  public:
    int getLPSLength(string &s) {
        // code here
         int n=s.length();
        vector<int>ans(n,0);
        int idx=0;
        
        for(int i=1;i<n;i++){
            
            if(s[i]==s[idx]){
                ans[i]=idx+1;
                idx++;
            }
            else{
                if(idx==0)
                    ans[i]=0;
                else{
                    idx=ans[idx-1];
                    i--;
                }    
            }
            
        }
        return ans[n-1];
    }
};