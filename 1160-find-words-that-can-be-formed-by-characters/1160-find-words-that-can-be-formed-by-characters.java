class Solution {
    public int countCharacters(String[] words, String chars) {
           HashMap<Character,Integer> mp1 = new HashMap<>();
           for(char ch : chars.toCharArray()){
            mp1.put(ch, mp1.getOrDefault(ch, 0) + 1);
           }
            String ans = "";
           for(String word : words){
            HashMap<Character,Integer> mp2 = new HashMap<>();
            for(char ch : word.toCharArray()){
                mp2.put(ch, mp2.getOrDefault(ch, 0)+1);
            }
            boolean flag = true;
            for(Map.Entry<Character,Integer> entry : mp2.entrySet()){
                char ch = entry.getKey();
                int count = entry.getValue();
                if(!mp1.containsKey(ch) || mp1.get(ch) < count){
                    flag = false;
                    break;
                }
            }
            if(flag){
                ans += word;
            }
           }
           return ans.length();

    }
}