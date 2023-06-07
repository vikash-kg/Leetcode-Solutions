class Solution {
public:
    int binarysearch(int n){
        int s = 0;
        int long long e = n;
        int long long mid = s + (e-s)/2;
        int long long ans = -1; 
        
        while(s<=e){
            int long long square = mid*mid;
            if(square == n){
                return mid;
            }
            else 
                if(square < n){
                    ans = mid;    // ans m store kr lenge mid ko
                    s = mid+1;
                }
            else{
                e = mid-1;
            }
            mid = s +(e-s)/2;
        }
        return ans;
    }
    int mySqrt(int x) {
        return binarysearch(x);
    }
};