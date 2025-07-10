class Solution {
  public:
    string longestString(vector<string> &words) {
        // code here
        
        sort(words.begin(), words.end());
        unordered_map<string, bool> map;
        
        for(int i=0; i<words.size(); i++){
            
            if(words[i].size() == 1)
                map[words[i]] = true;
            
            else {
                string temp = words[i];
                temp.pop_back();
                
                if(map[temp] == true)
                    map[words[i]] = true;
                else 
                    map[words[i]] = false;
            }
        }
        string ans = "";
        for(int i=0; i<words.size(); i++){
            if(map[words[i]] == true && words[i].size() > ans.size())
                ans = words[i];
        }
        
        return ans;
    }
};