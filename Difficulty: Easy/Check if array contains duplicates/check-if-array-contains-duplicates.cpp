class Solution {
  public:
    bool checkDuplicates(vector<int> &arr) {
        // code here
        unordered_set<int>st;
        for(auto &it:arr)
        {
            if(st.find(it)!=st.end())
              return true;
             st.insert(it);
        }
     return false;    
    }
};
