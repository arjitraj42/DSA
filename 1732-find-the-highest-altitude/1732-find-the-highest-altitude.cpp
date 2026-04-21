class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int altitude = 0;
        int highest = 0;
        int n = gain.size();
        for(int i = 0; i < n; i++){
            altitude = altitude + gain[i];
            highest = max(highest,altitude);
        }
        return highest;
    }
};