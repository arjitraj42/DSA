class Solution {
    public String frequencySort(String s) {
        HashMap<Character,Integer> mp = new HashMap<>();

        for(char ch : s.toCharArray()){
            mp.put(ch, mp.getOrDefault(ch, 0) + 1);
        }
        
        List<Map.Entry<Character, Integer>> list =
        new ArrayList<>(mp.entrySet());

        list.sort((a,b) -> b.getValue() - a.getValue());

        StringBuilder result = new StringBuilder();

        for(Map.Entry<Character,Integer> entry : list){
            char ch = entry.getKey();
            int freq = entry.getValue();

            for(int i = 0; i < freq; i++){
                result.append(ch);
            }
        }
        return result.toString();
    }
}