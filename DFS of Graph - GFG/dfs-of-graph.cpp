//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    // Function to return a list containing the DFS traversal of the graph.
    
     vector<bool> vis; 
    void dfs(int n, vector<int> adj[], vector<int>& ans,int V){
        vis[V]=true;
        ans.push_back(V);
        
       for(auto u:adj[V]){
          if(!vis[u]){
            dfs(n,adj,ans,u);
          }
        }
       
        
    }
    vector<int> dfsOfGraph(int n, vector<int> adj[]) {
        // Code here
          vector <int> ans;
        
        for(int i=0;i<n;i++){
            vis.push_back(false);
        }
        
        dfs(n,adj,ans,0);
        
        return ans;
    }
};

//{ Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int V, E;
        cin >> V >> E;

        vector<int> adj[V];

        for (int i = 0; i < E; i++) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        // string s1;
        // cin>>s1;
        Solution obj;
        vector<int> ans = obj.dfsOfGraph(V, adj);
        for (int i = 0; i < ans.size(); i++) {
            cout << ans[i] << " ";
        }
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends