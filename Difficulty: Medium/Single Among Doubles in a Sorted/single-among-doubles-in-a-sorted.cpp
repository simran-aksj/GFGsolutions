class Solution {
  public:
    int findOnce(vector<int>& arr) {
        // code here.
        int n= arr.size();
        int l=1, h=n-2;
        if(n==1)return arr[0];
        if(arr[0]!=arr[1])return arr[0];
        if(arr[n-1]!=arr[n-2]) return arr[n-1];
        while(l<=h)
        {   int mid=(h+l)/2;
            if(arr[mid]!=arr[mid+1]&&arr[mid]!=arr[mid-1]) 
            return arr[mid];
            else if((mid % 2 == 0 && arr[mid] == arr[mid + 1]) ||
            (mid % 2 == 1 && arr[mid] == arr[mid - 1]))  
            {
                l=mid+1;
                
            }
            else
            h=mid-1;
        }
    
        return -1;
    }
    
    
};