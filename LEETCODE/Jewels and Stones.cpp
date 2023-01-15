class Solution {
public:
    int numJewelsInStones(string jewels, string stones)
    {
        unordered_set<char>mp;
        for(char a:jewels)
        {
            mp.insert(a);
        }
        int count=0;
        for(char i:stones)
        {
            if(mp.count(i)
            {
                count++;
            }
        }
        return count;
    }
};
