class Solution {
  public:
    int cntSubarrays(vector<int> &arr, int k) {
        // code here
        map<int,int>mp;
        mp[0]=1;
        int cnt=0;
        int presum=0;
        for(int i=0;i<arr.size();i++)
        {
          presum+=arr[i];
          int rev=presum-k;
          cnt+=mp[rev];
          mp[presum]+=1;
     
        }
        return cnt;
    }
};