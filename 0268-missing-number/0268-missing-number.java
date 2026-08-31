class Solution {
    public int missingNumber(int[] nums) {
        int actualsum = 0;
        int origsum = 0;
        int n = nums.length;
        for(int i = 0; i < nums.length; i++){
            actualsum += nums[i];
        }
        origsum = n *(n +1)/ 2;

        int ans = origsum - actualsum;
        return ans;
    }
}