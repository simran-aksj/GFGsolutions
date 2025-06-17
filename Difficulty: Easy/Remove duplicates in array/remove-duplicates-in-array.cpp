class Solution {
  public:
    vector<int> removeDuplicate(vector<int>& arr) {
        // code here
        vector<int>ans;
        unordered_set<int>st;
        for(auto &it:arr)
        {
            if(st.find(it)==st.end())
            {
                ans.push_back(it);
                st.insert(it);
            }
        }
        return ans;
    }
};