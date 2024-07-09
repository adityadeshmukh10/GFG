//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

string merge (string s1, string s2);

int main()
{
    int t; cin >> t;
    while (t--)
    {
        string s1; cin >> s1;
        string s2; cin >> s2;

        cout << merge (s1, s2) << endl;
    }
}

// Contributed By: Pranay Bansal

// } Driver Code Ends



string merge (string S1, string S2)
{
    // your code here
    string ans="";
    int p1=0;
    int p2=0;
    
   
    while(p1<S1.length() && p2<S2.length())
    {
        ans+=S1[p1];
        p1++;
        ans+=S2[p2];
        p2++;
    }
    while(p1<S1.length())
    {
        ans+=S1[p1];
        p1++;
    }
    while(p2<S2.length())
    {
        ans+=S2[p2];
        p2++;
    }
    return ans;
}