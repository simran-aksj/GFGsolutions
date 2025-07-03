class Solution {
  public:
    // Function to find triplets with zero sum.
    bool findTriplets(vector<int> &arr) {
        // code here
          int n=arr.size();
       //vector<vector<int>>ans;
        sort(arr.begin(),arr.end());
        for(int i=0;i<n;i++)
        { if (i > 0 && arr[i] == arr[i - 1]) continue;
            int val=arr[i];
            int l=i+1,r=n-1;
            while(l<r)
            { int temp=val+arr[l]+arr[r];
                if(temp==0)
                 {
                    
                   return true;
                     //while (l < r && arr[l] == arr[l - 1]) l++;
                //while (l < r && arr[r] == arr[r + 1]) r--;

                 }
                else if(temp<0)l++;
                else r--;
            }
        }
        return false; 
    }
};