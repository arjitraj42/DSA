class Solution {
    public boolean detectCapitalUse(String word) {
        boolean allUpper = true;
        boolean allLower = true;
        for (int i = 0; i < word.length(); i++) {
            if (!Character.isUpperCase(word.charAt(i))) {
                allUpper = false;
                break;
            }
        }
        if (allUpper) {
            return true;
        }
        for (int i = 0; i < word.length(); i++) {
            if (!Character.isLowerCase(word.charAt(i))) {
                allLower = false;
                break;
            }
        }
        if (allLower) {
            return true;
        }
        if (Character.isUpperCase(word.charAt(0))) {
            for (int i = 1; i < word.length(); i++) {
                if (!Character.isLowerCase(word.charAt(i))) {
                    return false;
                }
            }
            return true;
        }
        return false;
    }
}