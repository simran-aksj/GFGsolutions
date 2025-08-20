

class Solution {
  public:
    int find(int n) {
        // Code here
        if(n<=1)return n;
        int sum=0;
        for(int i=0;i<n;i++)
        {
            sum+=i;
            if(sum==n)return i;
        }
        return -1;
    }
};