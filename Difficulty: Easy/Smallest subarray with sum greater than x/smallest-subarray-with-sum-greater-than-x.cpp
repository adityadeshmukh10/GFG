//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    int smallestSubWithSum(int x, vector<int>& arr) {
        // Your code goes here
        int n = arr.size();
         int i=0;
        int j=0;
        int sum=arr[0];
        int mini=INT_MAX;
        int count=0;
        while(j<n)
        {
            if(sum<=x)
            {
                j++;
                sum+=arr[j];
            }
            else if(sum>x)
            {
                mini=min(mini,j-i+1);
                sum-=arr[i];
                i++;
                count++;
            }
        }
        if(count >0) 
        {
            return mini;
        }
        
        else
        {
            return 0;
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
        int x;

        cin >> x;
        cin.ignore(); // Ignore the newline character after x

        string input;
        getline(cin, input); // Read the entire line for the array elements

        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }

        Solution obj;
        cout << obj.smallestSubWithSum(x, arr) << endl;
    }

    return 0;
}
// } Driver Code Ends