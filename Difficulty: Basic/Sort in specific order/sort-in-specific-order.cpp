//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
  public:
    void sortIt(long long arr[], long long n)
    {
        //code here.
        sort(arr,arr+n);
        vector<long long> v;
        
        for(int i=n-1;i>=0;i--)
        {
            if(arr[i]%2==1)
            {
                v.push_back(arr[i]);
            }
        }
        for(int i=0;i<n;i++)
        {
            if(arr[i]%2==0)
            {
                v.push_back(arr[i]);
            }
        }
        for(int i=0;i<n;i++)
        {
            arr[i] = v[i];
        }
    }
};

//{ Driver Code Starts.
int main() {
    long long t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;
        long long arr[n];

        for (int i = 0; i < n; i++) 
            cin >> arr[i];
        
        Solution ob;
        ob.sortIt(arr, n);

        for (int i = 0; i < n; i++)
            cout << arr[i] << " ";
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends