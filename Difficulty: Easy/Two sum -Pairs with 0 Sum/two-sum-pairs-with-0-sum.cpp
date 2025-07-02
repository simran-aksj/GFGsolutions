// User function template for C++

class Solution {
  public:
    vector<vector<int>> getPairs(vector<int>& arr) {
        // code here
        //vector<int>;
        int l=0,r=arr.size()-1;
         set<pair<int,int>>s;
        sort(arr.begin(),arr.end()); 
        while(l<r)
        {
            int sum=(arr[l]+arr[r]);
            if(sum==0&& l!=r)
            {
                s.insert({arr[l],arr[r]});
                l++;
                r--;
            }
            else if(sum<0)
            l++;
            else r--;
        }
         vector<vector<int>> result;
        for (auto &it : s) {
            result.push_back({it.first, it.second});
        }

        return result;
    }
};