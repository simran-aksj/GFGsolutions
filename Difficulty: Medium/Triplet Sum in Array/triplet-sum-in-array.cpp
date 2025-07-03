class Solution {
  public:
    bool hasTripletSum(vector<int> &arr, int target) {
        // Your Code Here
        int n=arr.size();
        sort(arr.begin(),arr.end());
        for(int i=0;i<n;i++)
        {
            int val=arr[i];
            int l=i+1,r=n-1;
            while(l<r)
            {
                int temp=val+arr[l]+arr[r];
                if(temp==target) return true;
                else if(temp<target)l++;
                else r--;
            }
        }
        return false;
    }
};