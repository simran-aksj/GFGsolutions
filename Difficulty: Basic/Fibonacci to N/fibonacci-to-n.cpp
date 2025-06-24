class Solution {
  public:
    vector<int> nFibonacci(int N) {
        // code here
        int a=0,b=1, c;
        vector<int>fib;
       fib.push_back(a);
       fib.push_back(b);
        for(int i=0;i<N;i++)
        {   c=a+b;
            if(N>=c)
            fib.push_back(c);
            else break;
            a=b;
            b=c;
        }
        return fib;
    }
};