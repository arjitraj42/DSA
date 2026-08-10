class Solution {
    public int longestContinuousSubstring(String s) {
        int count = 1;
        int maxcount = 1;

        for(int i = 1; i < s.length(); i++){
            if(s.charAt(i) - s.charAt(i - 1) == 1){
                count++;
            }else{
                count = 1;
            }

            maxcount = Math.max(count, maxcount);
        }
        return maxcount;
    }
}