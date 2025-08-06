//User function template for C++

class Solution {
  public:
    int romanToDecimal(string &str) {
        
        // code here
  int res=0;
  map<char,int>mp{
      {'I',1},{'V',5},{'X',10},{'C',100},{'L',50},{'D',500},{'M',1000}
      
  };
  for(int i=0;i<str.length();i++)
        {
            if(mp[str[i]]<mp[str[i+1]])
            {
                res-=mp[str[i]];
            }
            else
            {
                res+=mp[str[i]];
            }
        }
        return res;
        
    }
};
