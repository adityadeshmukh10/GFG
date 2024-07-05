//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++

class Solution {
  public:
    //void reverse()
    void leftRotate(vector<int>& arr, int d) {
        // code here
        int n = arr.size();
        for(int i=0;i<d/2;i++)
        {
            swap(arr[i],arr[d-1-i]);
        }
        for(int i = d; i < d + (n - d) / 2; i++) 
        {
            swap(arr[i], arr[n - 1 - (i - d)]);
        }
        for(int i=0;i<n/2;i++)
        {
            swap(arr[i],arr[n-i-1]);
        }
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore(); // Ignore the newline character after t
    while (t--) {
        vector<int> arr;
        int d;
        string input;

        getline(cin, input); // Read the entire line for the array elements
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }

        cin >> d;
        cin.ignore(); // Ignore the newline character after d
        Solution ob;
        ob.leftRotate(arr, d);
        for (int x : arr) {
            cout << x << " ";
        }
        cout << "\n";
    }
    return 0;
}

// } Driver Code Ends