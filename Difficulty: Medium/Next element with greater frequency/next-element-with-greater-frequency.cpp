class Solution {
  public:
    vector<int> findGreater(vector<int>& arr) {
        // code here
        unordered_map<int,int>mpp;
        for(auto &it:arr)
        {
            mpp[it]++;
        }
        stack<int>st;
        vector<int>ans(arr.size(),-1);
        for(int i=0;i<arr.size();i++)
        {
             while (!st.empty() && mpp[arr[i]] > mpp[arr[st.top()]]) {
                int idx = st.top();
                st.pop();
                ans[idx] = arr[i];  // Found next greater frequency element
            }
            
            // Push current index to stack
            st.push(i);
        
        }
        return ans;
    }
};
