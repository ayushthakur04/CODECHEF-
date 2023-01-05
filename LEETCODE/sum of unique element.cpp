class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
       
     unordered_map<int,int>mp;
     for(int a:nums){
         mp[a]++;
     }
     int sum=0;
     for(int a:nums){
         if(mp[a]==1){
             sum+=a;
         }
     }
     return sum;
    }
};
