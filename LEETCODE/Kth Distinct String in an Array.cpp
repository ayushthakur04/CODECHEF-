class Solution {
public:
    string kthDistinct(vector<string>& arr, int k) {
        unordered_map<string,int>mp;
        for(auto a:arr)
        {
            mp[a]++;
        }
        int count=0;
        for(auto a:arr)
        {
            if(mp[a]==1)
              count++;
            
            if(count==k)
            return a;
        }
        return "";
    }
    
};
