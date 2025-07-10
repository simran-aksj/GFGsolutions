class Solution {
  public:
    vector<int> lcmAndGcd(int a, int b) {
        // code here
        int x = a, y = b;
        
        // Euclidean algorithm to compute GCD
        while (x > 0 && y > 0) {
            if (x > y) {
                x = x % y;
            } else {
                y = y % x;
            }
        }
        
        int gcd = (x == 0) ? y : x;
        int lcm = (a * b) / gcd;
        
        return {lcm, gcd};
         
    }
};