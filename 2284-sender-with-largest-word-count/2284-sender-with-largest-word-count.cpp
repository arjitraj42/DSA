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

        priority_queue<pair<int,string>>pq;
        for(auto it : mp){
            pq.push({it.second,it.first});
        }
        return pq.top().second;
    }
};