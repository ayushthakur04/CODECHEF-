class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) 
    {
        vector<int>arr;
        unordered_map<int,int>mp;
        for(int a:nums)
        {
            mp[a]++;
        }
        for(auto a:mp)
        {
           if(a.second==2)
           {
               arr.push_back(a.first);
           }
        }
        return arr;
    }
};
