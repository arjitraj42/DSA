class Solution {
    public int maxSubArray(int[] nums) {
        int maxsum = Integer.MIN_VALUE;
        int currsum = 0;

        for(int i = 0; i < nums.length; i++){
            currsum += nums[i];
            currsum = Math.max(nums[i],currsum);
            maxsum = Math.max(currsum,maxsum);
        }
        return maxsum;
    }
}