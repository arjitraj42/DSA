class Solution {
    public String reverseOnlyLetters(String s) {
        String word = "";

        for(char ch : s.toCharArray()){
            if(Character.isLetter(ch)){
                word += ch;
            }
        }
        String ans = "";
        int i = word.length()- 1;
        for(char ch : s.toCharArray()){
            if(Character.isLetter(ch)){
                ans += word.charAt(i);
                i--;
            }else{
                ans += ch;
            }
        }
        return ans;
    }
}