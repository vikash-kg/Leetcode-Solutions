class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int maxi = 0;
        int sum = 0;
        for(auto i:gain){
            sum += i;
            maxi = max(maxi,sum);
        }
        return maxi;
    }
};