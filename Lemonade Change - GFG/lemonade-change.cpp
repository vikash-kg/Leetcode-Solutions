//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    bool lemonadeChange(int N, vector<int> &bills) {
        // code here
          int change[2];
        memset(change,0,sizeof(change));
        
        for(auto it: bills){
            if(it == 5)change[0]++;
            else if(it == 10){
                if(change[0]<=0)return false;
                change[0]--;
                change[1]++;
            }
            else{
                if(change[0]>0 && change[1]>0){
                    change[0]--;
                    change[1]--;
                }
                else if(change[0]>=3)change[0]-=3;
                
                else return false;
            }
        }
        
        return true;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;

        vector<int> bills(N);
        for (int i = 0; i < N; i++) cin >> bills[i];

        Solution obj;
        int ans = obj.lemonadeChange(N, bills);
        if (ans)
            cout << "True" << endl;
        else
            cout << "False" << endl;
    }
    return 0;
}
// } Driver Code Ends