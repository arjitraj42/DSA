class Solution {
    public String reverseByType(String s) {
        String letter = "";
        String symbol = "";

        for(char ch : s.toCharArray()){
            if(Character.isLetter(ch)){
                letter += ch;
            }else{
                symbol += ch;
            }
        }
        String ans = "";
        int i = letter.length() - 1;
        int j = symbol.length() - 1;

        for(char ch : s.toCharArray()){
            if(Character.isLetter(ch)){
                ans += letter.charAt(i);
                i--;
            }else{
                ans += symbol.charAt(j);
                j--;
            }
        }
        return ans;
    }
}