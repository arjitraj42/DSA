class Solution {
    public int lengthOfLongestSubstring(String s) {
        HashMap<Character,Integer> mp = new HashMap<>();
        int j = 0;
        int count = 0;
        for(int i = 0; i < s.length(); i++){
            while(mp.containsKey(s.charAt(i))){
                char left = s.charAt(j);

                mp.put(left, mp.get(left) - 1);
                if(mp.get(left) == 0){
                    mp.remove(left);
                }
                j++;
            }
            char curr = s.charAt(i);
            mp.put(curr, mp.getOrDefault(curr, 0) + 1);
            count= Math.max(count, i- j + 1);
        }
        return count;
    }
}