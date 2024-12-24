//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
// User function template for C++
class Solution {
public:
    // Function returns the second largest element
    int getSecondLargest(vector<int>& arr) {
        // Use a set to store unique elements
        set<int> st(arr.begin(), arr.end());

        // If the set has fewer than 2 elements, there is no second largest
        if (st.size() < 2) {
            return -1; // Or any value to indicate "no second largest"
        }

        // Traverse to the second last element
        auto it = st.end(); // Points past the last element
        --it;               // Move to the largest element
        --it;               // Move to the second largest element

        return *it;
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        Solution ob;
        int ans = ob.getSecondLargest(arr);
        cout << ans << endl;
        cout << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends