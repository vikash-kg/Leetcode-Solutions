//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
class Solution
{
public:
    void printFloydTriangle(int N)
    {
        int count =1;
        // Write Your Code here
        for(int i =1;i<=N;i++){
            for(int j = 1;j<= i; j++){
                cout<< count <<" ";
                count++;
            }
            cout <<endl;
        }
        
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N;
        cin >> N;
        Solution ob;
        ob.printFloydTriangle(N);
    }
    return 0;
}
// } Driver Code Ends