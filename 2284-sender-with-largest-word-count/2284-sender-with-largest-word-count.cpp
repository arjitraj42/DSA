class Solution {
public:
    string largestWordCount(vector<string>& messages, vector<string>& senders) {
        unordered_map<string,int>mp;
        for(int i =0;i < messages.size(); i++){
            int word = 1;
            for(char c : messages[i]){
                if(c == ' '){
                    word++;
                }
            }
            mp[senders[i]] += word;
        }
        string ans = "";
        int maxword = 0;

        for(auto it : mp){
            if(it.second > maxword || it.second == maxword && it.first > ans){
                maxword = it.second;
                ans = it.first;
            }
        }
        return ans;
    }
};