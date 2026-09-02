class Solution {
    public boolean isPalindrome(String s) {
        ArrayList<Character> p = new ArrayList<>();

        for(int i = 0; i < s.length(); i++){
            char ch = s.charAt(i);
            if(Character.isLetterOrDigit(ch)){
                ch = Character.toLowerCase(ch);
                p.add(ch);
            }
        }
        int j = p.size() - 1;
        int i = 0;
        while(i < j){
            if(p.get(i) != p.get(j)){
                return false;
            }
            i++;
            j--;
        }
        return true;
    }
}