//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    int countPair(int k, vector<int> &arr) {
        // Complete the function
        sort(arr.begin(),arr.end());
        int p1=0,p2=arr.size()-1;
        int count=0;
        while(p1<p2)
        {
            if(arr[p1]+arr[p2]==k)
            {
                count++;
                p1++;
                p2--;
            }
            else if(arr[p1]+arr[p2]>k)
            {
                p2--;
            }
            else if(arr[p1]+arr[p2]<k)
            {
                p1++;
            }
        }
        return count;
    }
};

//{ Driver Code Starts.
int main() {

    int t;
    cin >> t;

    while (t--) {
        vector<int> arr;
        int k;
        cin >> k;
        string input;
        getline(cin, input);
        getline(cin, input);

        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }

        Solution obj;
        cout << obj.countPair(k, arr) << endl;
    }

    return 0;
}
// } Driver Code Ends