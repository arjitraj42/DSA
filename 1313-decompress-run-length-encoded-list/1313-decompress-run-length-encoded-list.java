class Solution {
    public int[] decompressRLElist(int[] nums) {
        ArrayList<Integer> arr = new ArrayList<>();

        for(int i = 0; i < nums.length; i += 2){
            int freq = nums[i];
            int val = nums[i+ 1];

            for(int j = 0; j < freq; j++){
                arr.add(val);
            }
        }
        int ans[] = new int[arr.size()];

        for(int i = 0; i < arr.size(); i++){
            ans[i] = arr.get(i);
        }
        return ans;
    }
}