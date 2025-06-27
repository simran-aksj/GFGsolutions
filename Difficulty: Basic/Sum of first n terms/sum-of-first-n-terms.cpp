// User function template for C++

class Solution {
  public:
    int sumOfSeries(int n) {
        // code here
        int sum=0;
        for(int i=0;i<=n;i++)
        {
            sum+=(pow(i,3));
        }
    
        return sum;
    }
};