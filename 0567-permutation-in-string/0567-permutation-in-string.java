class Solution {
    public boolean checkInclusion(String s1, String s2) {

        int k = s1.length();

        for (int i = 0; i <= s2.length() - k; i++) {

            HashMap<Character, Integer> mp = new HashMap<>();

            for (char ch : s1.toCharArray()) {
                mp.put(ch, mp.getOrDefault(ch, 0) + 1);
            }

            for (int j = i; j < i + k; j++) {
                char ch = s2.charAt(j);

                if (!mp.containsKey(ch)) {
                    break;
                }

                mp.put(ch, mp.get(ch) - 1);

                if (mp.get(ch) == 0) {
                    mp.remove(ch);
                }
            }

            if (mp.isEmpty()) {
                return true;
            }
        }

        return false;
    }
}