class Solution {
  public:
    int maxProduct(vector<int> &arr) {
        // code here
        int prod1 = arr[0],prod2 = arr[0],result = arr[0];
    
    for(int i=1;i<arr.size();i++) {
        int temp = max({arr[i],prod1*arr[i],prod2*arr[i]});
        prod2 = min({arr[i],prod1*arr[i],prod2*arr[i]});
        prod1 = temp;
        
        result = max(result,prod1);
    }
    
        return result;
    }
};