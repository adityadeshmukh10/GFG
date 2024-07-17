//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
//Back-end complete function Template for C++

class Solution{
public:
	int countZeros(vector<vector<int>>A)
	{
		//code here
		int n = A.size();
		vector<int>v;
		for(int i=0;i<A.size();i++)
		{
		    for(int j=0;j<A[i].size();j++)
		    {
		        v.push_back(A[i][j]);
		    }
		}
		map<int,int> mp;
		for(int i=0;i<v.size();i++)
		{
		    mp[v[i]]++;
		}
		for(auto it=mp.begin();it!=mp.end();it++)
		{
		    if(it->first==0)
		    {
		        return it->second;
		    }
		}
		return 0;
	}
};

//{ Driver Code Starts.

// Driver program
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<vector<int>>A(n,vector<int>(n,0));
        for(int i=0;i<n;i++){
            for(int j =0;j<n;j++){
                cin>>A[i][j];
            }
        }
        Solution ob;
        cout<<ob.countZeros(A)<<'\n';
    }
    return 0;
}

// } Driver Code Ends