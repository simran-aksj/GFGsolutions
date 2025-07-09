// Function to locate the occurrence of the string x in the string s.
class Solution {
  public:
    int firstOccurence(string &txt, string &pat) {
        // Your code here
        
    
       if (txt.find(pat) != string::npos) 
        return  txt.find(pat);
     else 
       return -1;
    }
};