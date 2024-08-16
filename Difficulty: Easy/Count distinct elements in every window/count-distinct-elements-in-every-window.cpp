//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;



// } Driver Code Ends

class Solution{
  public:
    vector <int> countDistinct (int arr[], int n, int k)
    {
        //code here.
 vector<int> v;
     unordered_map<int,int>mp;
     int left=0,right=0;
     for(int i=0;i<k;i++)
     {
         mp[arr[i]]++;
     }
     v.push_back(mp.size());
     for(right=k;right<n;right++)
     {
           mp[arr[left]]--;
           if(mp[arr[left]]==0){
               mp.erase(arr[left]);
           }
           left++;
       mp[arr[right]]++;
       v.push_back(mp.size());
     }
     return v;
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {

        int n, k;
        cin >> n >> k;
        int a[n];
        for (int i = 0; i < n; i++) 
        	cin >> a[i];
        Solution obj;
        vector <int> result = obj.countDistinct(a, n, k);
        for (int i : result) 
        	cout << i << " ";
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends