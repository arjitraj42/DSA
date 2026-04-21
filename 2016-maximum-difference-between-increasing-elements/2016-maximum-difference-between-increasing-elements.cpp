class Solution {
public:
    int maximumDifference(vector<int>& nums) {
        int diff = 0;
        int maxdiff = -1;
        int n = nums.size();
        for(int i =0; i < n; i++){
            for( int j = i; j< n; j++){
                if(nums[i] < nums[j]){
                diff = nums[j] - nums[i];
                maxdiff = max(maxdiff,diff);
                }
            }
        }
        return maxdiff;
    }
};