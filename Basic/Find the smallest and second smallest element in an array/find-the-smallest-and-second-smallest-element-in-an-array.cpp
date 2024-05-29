//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

vector<int> minAnd2ndMin(int a[], int n);

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n];

        for (int i = 0; i < n; i++) 
            cin >> a[i];

        vector<int> ans = minAnd2ndMin(a, n);
        if (ans[0] == -1)
            cout << -1 << endl;
        else 
            cout << ans[0] << " " << ans[1] << endl;
    }
    return 0;
}
// } Driver Code Ends


vector<int> minAnd2ndMin(int a[], int n) {
    vector<int>ans;
    sort(a,a+n);
     
     int mini = INT_MAX;
     int secondmin = -1;
     
     for(int i = 0;i<n ;i++){
         mini = min(mini,a[i]);
         if(a[i]>mini){
             secondmin = a[i];
             break;
         }
     }
     
      if(secondmin == -1){
          ans.push_back(-1);
          return ans;
      }else{
          ans.push_back(mini);
          ans.push_back(secondmin);
           return ans;
      }
}