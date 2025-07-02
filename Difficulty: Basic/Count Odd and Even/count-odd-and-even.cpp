class Solution {
  public:
    /*Function to count even and odd elements in the array
     * arr : Array with its elements
     */
    pair<int, int> countOddEven(vector<int> &arr) {
        // your code here
         pair<int,int>ans;
         int cntO=0;
         int cntE=0;
         for(auto &it:arr)
         {
             if(it%2==0) cntE++;
             else cntO++;
         }
         ans=make_pair(cntO,cntE);
        return ans; 
    }
};