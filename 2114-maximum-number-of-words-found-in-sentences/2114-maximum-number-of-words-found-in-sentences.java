class Solution {
    public int mostWordsFound(String[] sentences) {
        int maxword = 0;
        
        for(String sentence : sentences){
            int space = 1;
            for(int i = 0; i < sentence.length(); i++){
                if(sentence.charAt(i)== ' '){
                    space++;
                }
            }
            maxword = Math.max(maxword, space);
        }
        return maxword;
    }
}