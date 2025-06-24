// User function Template for C++

class Solution {
  public:
    bool isPalindrome(int n) {
        // Code here.
        bool flag= false;
        int temp=n,rem;
        int ans=0;
        while(temp!=0)
        {   
            rem= temp%10;
            ans=ans*10+rem;
            temp/=10;
        }
        if(ans==n) flag= true;
        
        return flag;
    }
};