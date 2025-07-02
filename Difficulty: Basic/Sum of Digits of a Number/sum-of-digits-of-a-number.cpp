class Solution {
  public:
    int sumOfDigits(int n) {
        // Code here
        int sum=0;
        if(n==0)return 0;
        while (n>0)
        {
            int t=n%10;
            sum+=t;
            n=n/10;
        }
        return sum;
    }
};