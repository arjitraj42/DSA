class Solution {
    public boolean wordPattern(String pattern, String s) {
        String[] word = s.split(" ");
        HashMap<Character, String> mp1 = new HashMap<>();
        HashMap<String, Character> mp2 = new HashMap<>();
        if(word.length != pattern.length()){
            return false;
        }
        for(int i = 0; i < word.length; i++){
            String ans = word[i];
                char ch = pattern.charAt(i);

                if(mp1.containsKey(ch) && !mp1.get(ch).equals(ans) ||
                mp2.containsKey(ans) && !mp2.get(ans).equals(ch)){
                    return false;
                }
                mp1.put(ch,ans);
                mp2.put(ans,ch);
        }
        return true;
    }
}