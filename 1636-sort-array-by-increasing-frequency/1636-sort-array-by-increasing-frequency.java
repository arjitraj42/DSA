class Solution {
    public int[] frequencySort(int[] nums) {
         HashMap<Integer,Integer> mp = new HashMap<>();
         for(int i = 0; i < nums.length; i++){
            mp.put(nums[i], mp.getOrDefault(nums[i], 0) + 1);
         }

         Integer[] arr = new Integer[nums.length];
         for(int i = 0; i < nums.length; i++){
            arr[i] = nums[i];
         }

         Arrays.sort(arr,(a,b) ->{
            int freqA = mp.get(a);
            int freqB = mp.get(b);

            if(freqA != freqB){
                return freqA - freqB;
            }
            return b - a;
         });

         for (int i = 0; i < nums.length; i++) {
            nums[i] = arr[i];
        }

        return nums;
    }
}