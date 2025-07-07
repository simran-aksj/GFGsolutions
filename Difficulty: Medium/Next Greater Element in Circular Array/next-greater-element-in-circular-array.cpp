class Solution {
  public:
    vector<int> nextLargerElement(vector<int> &arr) {
        // code here
        stack<int> st;
        int n = arr.size();
        vector<int> nge(n, -1);
        for (int i = 2 * n - 1; i >= 0; i--) {

            while (!st.empty() && st.top() <= arr[i % n]) {
                st.pop();
            }
            if (i < n) {
                if (!st.empty())
                    nge[i] = st.top();
                else
                    nge[i] = -1;
            }
            st.push(arr[i % n]);
        }
        return nge;
    }
};