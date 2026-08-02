import java.util.*;

class Solution {
    public boolean canConstruct(String ransomNote, String magazine) {

        HashMap<Character, Integer> mp1 = new HashMap<>();
        HashMap<Character, Integer> mp2 = new HashMap<>();
        for (char ch : ransomNote.toCharArray()) {
            mp1.put(ch, mp1.getOrDefault(ch, 0) + 1);
        }
        for (char ch : magazine.toCharArray()) {
            mp2.put(ch, mp2.getOrDefault(ch, 0) + 1);
        }
        for (Map.Entry<Character, Integer> entry : mp1.entrySet()) {
            char ch = entry.getKey();
            int count = entry.getValue();
            if (!mp2.containsKey(ch) || mp2.get(ch) < count) {
                return false;
            }
        }
        return true;
    }
}