class Solution {
public:
    vector<int> fairCandySwap(vector<int>& aliceSizes, vector<int>& bobSizes) {
         int sumA = 0;
         int sumB = 0;
         int diff = 0;
         for(int i = 0; i < aliceSizes.size(); i++){
            sumA += aliceSizes[i];
         }
         for(int i = 0; i < bobSizes.size(); i++){
            sumB += bobSizes[i];
         }
         diff = (sumB - sumA)/2;

        unordered_set<int>mp(bobSizes.begin(), bobSizes.end());
        
        for(int i = 0; i < aliceSizes.size(); i++){
            int x = aliceSizes[i];
        int y = x + diff;
        if(mp.count(y)){
            return{x,y};
        }
         }
         return{};
    }
};