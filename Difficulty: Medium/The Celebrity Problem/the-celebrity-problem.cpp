//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++

class Solution {
  public:
    // Function to find if there is a celebrity in the party or not.
    int celebrity(vector<vector<int> >& M) {
        // code here
        int n = M.size();
        int start=0,end=n-1;
    
    while(start < end){
        
        if(M[start][end]==1) start++;
        
        else end--;
    }
    
        for(int i=0;i<n;i++){
            if(i!=start){
                 if(M[i][start]==0 || M[start][i]==1)
                 return -1;
            }
        }
    return start;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<vector<int> > M(n, vector<int>(n, 0));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                cin >> M[i][j];
            }
        }
        Solution ob;
        cout << ob.celebrity(M) << endl;
    }
}

// } Driver Code Ends