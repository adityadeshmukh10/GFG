//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
class Solution{
public:
    vector<int> findTwoElement(vector<int> arr, int n) {
        // code here
        int rep=0,mis=0,i=0;
        while(i<n)          //Traversing the array
        {
            if(arr[i]==i+1)     //if at right position 
            {
                i++;
            }
            else if(arr[i]==arr[arr[i]-1]) //if we get same values
            {
                rep=arr[i];
                mis=i+1;
                i++;
            }
            else{                      //if not at right position
                swap(arr[i],arr[arr[i]-1]);
            }
        }
        return {rep,mis};
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        Solution ob;
        auto ans = ob.findTwoElement(a, n);
        cout << ans[0] << " " << ans[1] << "\n";
    }
    return 0;
}
// } Driver Code Ends