class Solution {
    public int[] frequencySort(int[] nums) {
        HashMap<Integer,Integer> mp = new HashMap<>();

        for(int i = 0; i < nums.length;i++){
            mp.put(nums[i], mp.getOrDefault(nums[i], 0) + 1);
        }
        ArrayList<Integer> list = new ArrayList<>();
        for(int i = 0; i < nums.length;i++){
            list.add(nums[i]);
        }

        Collections.sort(list,(a,b)->{
            int freqA = mp.get(a);
            int freqB = mp.get(b);
            if(freqA != freqB){
                return freqA- freqB;
            };
            return b - a;
        });
        for(int i = 0; i < list.size(); i++){
            nums[i] = list.get(i);
        }
        return nums;
    }
}