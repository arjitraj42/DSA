class Solution {
    public int mostFrequentEven(int[] nums) {
        HashMap<Integer,Integer> mp = new HashMap<>();
        int n = nums.length;
        for(int i = 0; i < n; i++){
            if(nums[i] % 2 == 0){
                mp.put(nums[i], mp.getOrDefault(nums[i], 0) + 1);
            }
        }
        int ans = -1;
        int maxfreq = 0;
        for(Map.Entry<Integer,Integer> en : mp.entrySet()){
            int num = en.getKey();
            int  freq = en.getValue();

            if(freq > maxfreq){
                maxfreq = freq;
                ans = num;
            }else if(maxfreq == freq && num < ans){
                ans = num;
            }
        }
            return ans;
    }
}