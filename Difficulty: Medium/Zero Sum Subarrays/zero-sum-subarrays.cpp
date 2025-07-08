class Solution {
  public:
    int findSubarray(vector<int> &arr) {
        // code here.
        map<int,int>mp;
        mp[0]=1;
        int cnt=0;
        int presum=0;
        for(int i=0;i<arr.size();i++)
        {
          presum+=arr[i];
          int rev=presum-0;
          cnt+=mp[rev];
          mp[presum]+=1;
     
        }
        return cnt;
    }
};