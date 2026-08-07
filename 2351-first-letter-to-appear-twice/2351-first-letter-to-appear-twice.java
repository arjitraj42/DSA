class Solution {
    public char repeatedCharacter(String s) {
        HashSet<Character> mp = new HashSet<>();
        for(char ch : s.toCharArray()){
            if(mp.contains(ch)){
                return ch;
            }
            mp.add(ch);
        }
        return ' ';
    }
}