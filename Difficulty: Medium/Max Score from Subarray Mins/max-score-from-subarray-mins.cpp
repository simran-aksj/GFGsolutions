class Solution {
  public:
    int maxSum(vector<int> &arr) {
        // code here
         int maxsum=INT_MIN;
        for(int i=1;i<arr.size();i++){
            int sum=arr[i]+arr[i-1];
            if(sum>maxsum){
                maxsum=sum;
            }
        }
        return maxsum;
    
    }
};