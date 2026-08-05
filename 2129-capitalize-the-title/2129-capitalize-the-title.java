class Solution {
    public String capitalizeTitle(String title) {
        String[] words = title.split(" ");
        StringBuilder ans = new StringBuilder();

        for(String word : words){
            word = word.toLowerCase();

            if(word.length() <= 2){
                ans.append(word);
            }else{
                ans.append(word.substring(0,1).toUpperCase());
                ans.append(word.substring(1));
            }
            ans.append(" ");
        }
        return ans.toString().trim();
    }
}