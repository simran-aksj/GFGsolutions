class Solution {
  public:
    double findMedian(vector<int> &arr) {
        // code here.
        sort(arr.begin(),arr.end());
        int n=arr.size();
        double med;
        if(n%2==0)
        { 
          med= (arr[n/2]+arr[n/2-1])/2.0;  
        }
        else
         med=arr[n/2];
    
        return med;
    }
    
};