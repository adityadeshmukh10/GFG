//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;



// } Driver Code Ends
class Solution{
  public:
    int findUnique(int a[], int n, int k) {
        map<int,int> mp;
        for(int i=0;i<n;i++)
        {
            mp[a[i]]++;
        }
        for(auto it = mp.begin();it!=mp.end();it++)
        {
            if(it->second%k!=0)
            {
                return it->first;
            }
        }
        return -1;
    }

};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        int a[n], i;
        for (i = 0; i < n; i++) {
            cin >> a[i];
        }
        Solution obj;
        cout << obj.findUnique(a, n, k) << endl;
    }
}
// } Driver Code Ends