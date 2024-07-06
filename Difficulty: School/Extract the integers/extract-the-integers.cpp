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
    vector<string> v;
    string extractedInt ="";
    
    for (int i=0; i<s.size(); i++){
        
        if(s[i]>='0' && s[i] <= '9'){
            
            extractedInt += s[i];
            
            // check if next sequence is also integer
            if(i+1 < s.size() && s[i+1]>='0' && s[i+1] <= '9'){
            
                continue;
            
            }
        
            v.push_back(extractedInt);
            extractedInt = "";
        }
        
    }
    return v;
}