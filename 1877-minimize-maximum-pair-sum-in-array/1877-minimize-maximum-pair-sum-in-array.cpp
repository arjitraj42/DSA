class Solution {
public:
    int minPairSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int sum = 0;
        int maxsum = 0;
        int i = 0;
        int j = nums.size() - 1;
        while(i < j){
            sum = nums[i] + nums[j];
            maxsum = max(maxsum,sum);
            i++;
            j--;
        }
        return maxsum;
    }
};