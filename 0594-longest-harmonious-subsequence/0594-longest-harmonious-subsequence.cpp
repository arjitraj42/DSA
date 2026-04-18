class Solution {
public:
    int findLHS(vector<int>& nums) {
        unordered_map<int,int>mp;
        int result = 0;
        for(int i : nums){
            mp[i]++;
        }
        for(auto it : mp){
            int x = it.first;

            if(mp.count(x + 1)){
                result = max(result, mp[x] + mp[x + 1]);
            }
        }
        return result;
    }
};