class Solution {
  public:
    vector<int> findUnion(vector<int> &a, vector<int> &b) {
        // code here
        int i;
        set<int> st;
        vector<int>un;
        int n=a.size();
        int m=b.size();
        for(i=0;i<n;i++)
        {
            st.insert(a[i]);
        }
        for(i=0;i<m;i++)
        {
            st.insert(b[i]);
        }
        
        
        for(auto it:st)
        {
            un.push_back(it);
        }
        return un;
    }
};