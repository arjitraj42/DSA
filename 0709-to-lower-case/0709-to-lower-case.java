class Solution {
    public String toLowerCase(String s) {
        String ans = "";

        for(int i = 0; i < s.length(); i++){
            char ch = s.charAt(i);
            ch = Character.toLowerCase(ch);
            ans += ch;
        }
        return ans;
    }
}