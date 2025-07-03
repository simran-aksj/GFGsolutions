class Solution {
  public:
    // Function to find element in sorted array
    // arr: input array
    // k: element to be searched
    bool searchInSorted(vector<int>& arr, int k) {

        // Your code here
        int l=0,r=arr.size()-1;
        while(l<=r)
        {
            int mid= l+(r-l)/2;
            if(arr[mid]==k)return true;
            else if(k<arr[mid]) r=mid-1;
            else l=mid+1;
        }
        return false;
    }
};