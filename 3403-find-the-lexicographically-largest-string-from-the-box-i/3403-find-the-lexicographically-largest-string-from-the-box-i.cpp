class Solution {
public:
    string answerString(string word, int numFriends) {
        int n = word.size();

        if(numFriends == 1){
            return word;
        } 

        string ans = "";

        int maxlen = n - numFriends + 1;
        
        for(int i = 0; i < n; i++){
            int len = min(maxlen, n -i);
            string curr = word.substr(i,len);

            if(curr > ans){
                ans = curr;
            }
        }
        return ans;
    }
};