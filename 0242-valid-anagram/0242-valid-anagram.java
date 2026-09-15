class Solution {
    public boolean isAnagram(String s, String t) {
        HashMap<Character,Integer> mp = new HashMap<>();
        
        if(s.length() != t.length()){
            return false;
        }

        for(int i = 0; i < s.length(); i++){
            mp.put(s.charAt(i), mp.getOrDefault(s.charAt(i), 0) + 1);
        }

        for(int i = 0; i < t.length(); i++){
            if (!mp.containsKey(t.charAt(i))) {
                return false;
            }

            mp.put(t.charAt(i), mp.get(t.charAt(i)) - 1);
        }
        for(Map.Entry<Character,Integer> auto : mp.entrySet()){
            if(auto.getValue() != 0){
                return false;
            }
        }
        return true;
    }
}