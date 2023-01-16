class Solution 
{
public:
    int findFinalValue(vector<int>& nums, int original)
    {
        set<int>mp;
        for(int a:nums)
        {
        mp.insert(a);
        }
        for(int a:mp)
        {
            if(mp.find(original)!=mp.end())
            {
                original=original*2;
            }
           
        }
        return original;
    }
};
