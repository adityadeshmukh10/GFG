//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    typedef long long int ll;

    long long int minValue(vector<int> &arr1, vector<int> &arr2) {
        // code here
        sort(arr1.begin(),arr1.end());
        sort(arr2.begin(),arr2.end());
        int p1=0,p2=0;
        long long int pro1=0;
        long long int pro2=0;
        while(p1!=arr1.size()&&p2!=arr2.size())
        {
            long long int k1 = arr1[p1]*arr2[p2];
            pro1=pro1+k1;
            p1++;
            p2++;
        }
        long long int final1= pro1;
        
        reverse(arr2.begin(),arr2.end());
        int p3=0,p4=0;
        while(p3!=arr1.size()&&p4!=arr2.size())
        {
            long long int k2 = arr1[p3]*arr2[p4];
            pro2=pro2+k2;
            p3++;
            p4++;
        }
        long long int final2 = pro2;
        return min(final1,final2);
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<int> arr1, arr2;
        string input1;
        getline(cin, input1);
        stringstream ss1(input1);
        int number1;
        while (ss1 >> number1) {
            arr1.push_back(number1);
        }
        string input2;
        getline(cin, input2);
        stringstream ss2(input2);
        int number2;
        while (ss2 >> number2) {
            arr2.push_back(number2);
        }
        Solution ob;
        long long int ans = ob.minValue(arr1, arr2);
        cout << ans << endl;
    }
    return 0;
}
// } Driver Code Ends