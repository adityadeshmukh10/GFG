//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution{
    public:
    string chartostr(char arr[] , int n)
    {
        //code here
        string str="";
        stack<char> s;
        
        for(int i=0;i<n;i++)
        {
            s.push(arr[i]);
        }
        
        for(int i=0;i<n;i++)
        {
            char ch = s.top();
            s.pop();
            str+=ch;
        }
        
        for(int i=0;i<n/2;i++)
        {
            swap(str[i],str[n-i-1]);
        }
        return  str;
    }
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int n;
        cin>>n;
        char arr[n];
        for(int j=0;j<n;j++)
        {
            cin>>arr[j];
        }
        Solution ob;
        
        cout<<ob.chartostr(arr,n)<<endl;

    }
}

// } Driver Code Ends