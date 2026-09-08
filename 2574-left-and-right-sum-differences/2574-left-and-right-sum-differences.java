class Solution {
    public int[] leftRightDifference(int[] nums) {
        int n = nums.length;
        int[] left = new int[n];
        int[] right = new int[n];
        int tsum = 0;
        int leftsum = 0;
        int rightsum = 0;
        for(int i  = 0; i < n; i++){
            tsum += nums[i];
        }

        for(int i = 0; i < n; i++){
            rightsum = tsum - leftsum - nums[i];
            right[i] = rightsum;
            left[i] = leftsum;
            leftsum += nums[i];
        }
        for(int i = 0; i < n; i++){
            nums[i] = Math.abs(right[i] - left[i]);
        }
        return nums;
    }
}