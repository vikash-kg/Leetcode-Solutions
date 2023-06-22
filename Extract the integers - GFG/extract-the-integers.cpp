//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
vector<string> extractIntegerWords(string s);

int main()
{
    int t;
    cin>>t;
    cin.ignore();
    while(t--)
    {
        string str;
        getline(cin,str);
        vector<string> ans = extractIntegerWords(str);
        if(ans.size() == 0)
            cout<<"No Integers";
        else
            for(auto i: ans) cout<<i<<' ';
        cout<<endl;
    }
    return 0;
}

// } Driver Code Ends


vector<string> extractIntegerWords(string s)
{
    // code here
    vector<string> ans;
    int i =0;
    while(i< s.length()){
         if(s[i]>= '0' && s[i]<='9'){
        string temp = "";
        int j= i;
        while(s[j] >= '0' && s[j]<= '9'){
            temp +=s[j];
            j++;
        }
        i=j;
        ans.push_back(temp);
    }
    i++;
    }
    return ans;
   
}