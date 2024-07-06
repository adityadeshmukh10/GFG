//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
string transform(string str);
int main()
{
    int t;
    cin>>t;
    cin.ignore();
    while(t--)
    {
        string str;
        getline(cin,str);
        cout<<transform(str)<<endl;
    }
    return 0;
}
// } Driver Code Ends



string transform(string s)
{
    // code here
    for(int i=1;i<s.length();i++){
        if(s[0]>='a' && s[0]<='z'){
            s[0]=s[0]-'a'+'A';
        }
        if((s[i]>='a'&& s[i]<='z') && (s[i-1]==' ')){
            s[i]=s[i]-'a'+'A';
        }
        
    }
    return s;
}