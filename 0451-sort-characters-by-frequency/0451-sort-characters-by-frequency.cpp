class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char,int>mp;
        for(char ch : s){
            mp[ch]++;
        }
        priority_queue<pair<int, char>> pq;
        for(auto it : mp){
            pq.push({it.second,it.first});
            
        }
        string word = "";
        while(!pq.empty()){
            int freq = pq.top().first;
            char ch = pq.top().second;
            word += string(freq,ch);
            pq.pop();
        }
        return word;
    }
};