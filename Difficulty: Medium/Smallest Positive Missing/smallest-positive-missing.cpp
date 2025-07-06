class Solution {
  public:
    int missingNumber(vector<int> &arr) {
        // code here
        unordered_map<int,int>mpp;
        for(auto it:arr)
        {
            mpp[it]++;
        }
        int i=1;
        while(true)
        {
            if(mpp[i]==0)return i;
            i++;
        }
        return -1;
    }
};