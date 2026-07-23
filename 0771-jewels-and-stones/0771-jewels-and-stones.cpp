class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        unordered_set<char>mp;

        for(char ch : jewels){
            mp.insert(ch);
        }

        int count = 0;

        for(char ch : stones){
            if(mp.count(ch)){
                count++;
            }
        }
        return count;

    }
};