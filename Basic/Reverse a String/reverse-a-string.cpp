//{ Driver Code Starts
//Initial Template for C++


#include<bits/stdc++.h>
using namespace std;



// } Driver Code Ends
//User function Template for C++
class Solution
{
    public:
    string reverseWord(string s)
    {
        // Your code goes here`
             char temp;
        int size = s.size();
        for(int i=0;i<size/2;i++){
            temp = s[i];
            s[i]=s[size-1-i];
            s[size-1-i]=temp;
        }
        return s;
    }
};



//{ Driver Code Starts.

int main() {
	
	int t;
	cin>>t;
	while(t--)
	{
    	string s;
    	cin >> s;
    	Solution ob;
    	cout << ob.reverseWord(s) << endl;
	}
	return 0;
	
}


// } Driver Code Ends