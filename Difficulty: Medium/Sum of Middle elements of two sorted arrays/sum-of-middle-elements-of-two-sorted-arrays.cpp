//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++

//Position this line where user code will be pasted.
class Solution {
  public:
    int SumofMiddleElements(vector<int> &arr1, vector<int> &arr2) {
        // code here
        int m = arr1.size();
        int n = arr2.size();
        int k = m+n;
        vector<int> v(k);
        int idx = 0;
        for (int i = 0; i < m; ++i)
        {
            v[idx] = arr1[i];
            idx++;
        }
        for (int i = 0; i < n; ++i) 
        {
            v[idx] = arr2[i];
            idx++;
        }
        sort(v.begin(),v.end());
        int sum = v[k/2-1] + v[k/2];
        return sum;
    }
};

//{ Driver Code Starts.
//Back-end complete function template in C++

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<int> arr, brr;
        string input1;
        getline(cin, input1);
        stringstream ss1(input1);
        int number1;
        while (ss1 >> number1) {
            arr.push_back(number1);
        }
        string input2;
        getline(cin, input2);
        stringstream ss2(input2);
        int number2;
        while (ss2 >> number2) {
            brr.push_back(number2);
        }
        Solution ob;
        int res = ob.SumofMiddleElements(arr, brr);
        cout << res << endl;
    }
}
// } Driver Code Ends