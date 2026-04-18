class Solution {
public:
    int maximumUniqueSubarray(vector<int>& nums) {
        unordered_set<int>mp;
        int left = 0;
        int sum = 0;
        int maxscore = 0;
        for(int i = 0; i < nums.size(); i++){
            while(mp.find(nums [i]) != mp.end()){
                sum = sum - nums[left];
                mp.erase(nums[left]);
                left++;
            }
            mp.insert(nums[i]);
            sum += nums[i];
            maxscore = max(maxscore,sum);
        }
        return maxscore;
    }
};