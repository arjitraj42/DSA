class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        unordered_map<int,int> mp;
        for(int i = 0 ; i< nums.size(); i++){
            mp[nums[i]]++;
        }
        int maxf = 0;
        for(auto it : mp){
            maxf = max(maxf, it.second);
        }
        int ans = 0;
        for(auto it : mp){
            if(maxf == it.second){
                ans += maxf;
            }
        }
        return ans;
    }
};