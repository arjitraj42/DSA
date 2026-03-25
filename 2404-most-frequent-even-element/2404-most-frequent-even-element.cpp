class Solution {
public:
    int mostFrequentEven(vector<int>& nums) {
        unordered_map<int,int>mp;
        for(int i = 0; i < nums.size(); i++){
            if(nums[i]% 2 == 0){
            mp[nums[i]]++;
            }
        }
        int maxfreq = 0;
        int ans = -1;
        for(auto it : mp){
            int a = it.first;
            int b = it.second;

            if(b > maxfreq){
                maxfreq = b;
                ans = a;
            }
            else if(b == maxfreq && a < ans){
                ans = a;
            }
        }
        return ans;
    }
};