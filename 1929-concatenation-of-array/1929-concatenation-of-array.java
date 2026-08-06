class Solution {
    public int[] getConcatenation(int[] nums) {
        int[] arr = new int[ 2 * nums.length];
        int j =0;
        for(int i =0; i <2 * nums.length; i++){
            arr[j] = nums[i % nums.length];
            j++;
        }
        return arr;
    }
}