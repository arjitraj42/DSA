class Solution {
public:
    vector<string> commonChars(vector<string>& words) {
        unordered_map<char,int> mp;
        for(char ch : words[0]){
            mp[ch]++;
        }
        for(int i = 1 ; i < words.size(); i++){
            unordered_map<char,int>temp;
            for(char ch : words[i]){
            temp[ch]++;

            }
            for(auto &it : mp){
                it.second = min(it.second,temp[it.first]);
        }
        }
        vector<string> result;
        for(auto &it : mp){
            while(it.second-- > 0){
                result.push_back(string(1, it.first));
            }
        }
        sort(result.begin(), result.end());
        return result;
    }
};