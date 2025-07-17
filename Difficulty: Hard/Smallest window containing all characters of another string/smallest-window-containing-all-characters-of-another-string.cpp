class Solution {
  public:
    // Function to find the smallest window in the string s1 consisting
    // of all the characters of string s2.
    string smallestWindow(string &s1, string &s2) {
        // Your code here
           unordered_map<char, int> mp;
         int n= s2.size();
         int total=n;
         for (int i=0; i<n; i++){
             mp[s2[i]]++;
             
         }
         int ans= INT_MAX;
         int index=-1;
         int s=0;
         int e=0;
         while(e< s1.size()){
             mp[s1[e]]--;
             if(mp[s1[e]]>=0){
                 total--;
             }
             while(total==0 and s<=e){
                 if(ans> e-s+1){
                     ans= e-s+1;
                     index=s;
                 }
                 mp[s1[s]]++;
                 if(mp[s1[s]]>0){
                     total++;
                 }
                 s++;
                 
                 
             }
             e++;
         }
         if(index==-1)
         return "";
         string str="";
      
             for (int i= index; i< index+ans; i++){
                 str+= s1[i];
          
            
         }
          return str;
    }
};