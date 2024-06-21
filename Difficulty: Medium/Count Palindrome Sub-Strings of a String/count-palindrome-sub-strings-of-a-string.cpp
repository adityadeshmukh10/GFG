//{ Driver Code Starts
// #include <bits/stdc++.h>
// using namespace std;

// // int CountPS(char s[], int n);

// int main() {
//     int t;
//     cin >> t;
//     while (t--) {
// int N;
// cin >> N;
// char S[N + 1];
// cin >> S;
// Solution ob;
//         cout << ob.CountPS(S, N) << endl;
//     }
//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends


// User function Template for C++

class Solution {
  public:
bool isPalindrome(char s[], int i, int j) {
    while(i<=j) {
        if(s[i]!=s[j]) return false;
        i++; j--;
    }
    return true;
}

int CountPS(char S[], int N)
{
    int ans = 0;
    for(int i=0; i<N; i++) {
        for(int j=i+1; j<N; j++) {
            if(isPalindrome(S, i, j)) ans++;
        }
    }
    return ans;
}
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;
        char S[N + 1];
        cin >> S;
        Solution ob;
        cout << ob.CountPS(S, N) << endl;
    }
    return 0;
}
// } Driver Code Ends