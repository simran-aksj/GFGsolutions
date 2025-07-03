/*Complete the function below*/

class Solution {
  public:
    bool isPalinArray(vector<int> &arr) {
        // code here
        vector<int> ans;
        
        for(int i=0;i<arr.size();i++)
        {
            int n=arr[i];
            int digit=0;
            while(n!=0)
            {
                int rem=n%10;
                digit=digit*10+rem;
                n=n/10;
            }
            ans.push_back(digit);
            
        }
        
        return arr==ans;
        
    
    }
};