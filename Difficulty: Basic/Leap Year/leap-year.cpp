class Solution {
  public:
    bool checkYear(int n) {
        // code here
        if(n%400==0)return true;
        if( n%4==0 && n%100!=0) return true;
        
        return false;
    }
};