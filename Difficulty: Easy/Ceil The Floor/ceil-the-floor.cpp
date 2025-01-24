//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User code template

class Solution {
  public:
    vector<int> getFloorAndCeil(int x, vector<int> &arr) {
        // code here
        int f = -1;
        int c = 100000;
        int n = arr.size();
        vector<int> v;
        for(int i=0;i<n;i++)
        {
            if(arr[i]<=x)
            {
                f = max(arr[i],f);
            }
            if(arr[i]>=x)
            {
                c = min(arr[i],c);
            }
        }
        if(c==100000)
        {
            c=-1;
        }
        v.push_back(f);
        v.push_back(c);
        return v;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore(); // Ignore the newline character after t
    while (t--) {
        vector<int> arr;
        int x;
        string input;
        cin >> x;
        cin.ignore();

        getline(cin, input); // Read the entire line for the array elements
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }

        Solution ob;
        auto ans = ob.getFloorAndCeil(x, arr);
        cout << ans[0] << " " << ans[1] << "\n~\n";
    }
    return 0;
}
// } Driver Code Ends