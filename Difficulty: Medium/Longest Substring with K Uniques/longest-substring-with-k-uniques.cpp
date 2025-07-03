class Solution {
  public:
    int longestKSubstr(string &s, int k) {
        // code here
        int i=0,j=0;
        unordered_map<char,int>mpp;
        //int size=mpp.size();
        int maxi=-1;
        while(j<s.size())
        {
            mpp[s[j]]++;
            
            if(mpp.size()<k)
            j++;
            else if (mpp.size()==k)
            {
                maxi=max(maxi,j-i+1);
            
                j++;
            }
            else 
            {  while(mpp.size()>k)
                {
                    mpp[s[i]]--;
                if(mpp[s[i]]==0) mpp.erase(s[i]);
                i++;
            }
                j++;
            }
        }
        return maxi;
    }
};