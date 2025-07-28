class Solution {
  public:
    int findSubString(string& str) {
        // code here
        unordered_set<char>st;
        for(auto ch:str)
        {
            st.insert(ch);
        }
        unordered_map<char,int>mpp;
        int i=0,j=0;
        int ans=INT_MAX;
        
        while(j<str.size())
        {
            mpp[str[j]]++;
            while(mpp.size()==st.size())
            {
                ans=min(ans,j-i+1);
                mpp[str[i]]--;
                if(mpp[str[i]]==0) mpp.erase(str[i]);
            
                i++;
            }
            j++;
        }
        return ans;
    }
};