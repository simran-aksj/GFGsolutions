class Solution {
  public:
    int countAtMostK(vector<int> &arr, int k) {
        // code here
        int i=0,j=0,n=arr.size();
        int cnt=0;
        unordered_map<int,int>mpp;
        while(j<n)
        {
            mpp[arr[j]]++;
            
            if(mpp.size()<=k)
            {
                cnt += (j - i + 1);
                j++;
            }
            else 
            {
             while(mpp.size()>k)
             {   mpp[arr[i]]--;
                 if (mpp[arr[i]] == 0)
                   mpp.erase(arr[i]);
                   i++;
 
                 
             }
             cnt += (j - i + 1);
            j++;
            }
        }
        return cnt;
    }
};