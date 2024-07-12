//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
  
    public:
    pair<long long, int> maxNtype(long long arr[], long long n)
    {
        //code here.
        long long maxe=arr[0],mine=arr[0];
       for(int i=0;i<n;i++){
           maxe=max(maxe,arr[i]);
           mine=min(mine,arr[i]);
       }
       if(maxe==arr[0] && mine==arr[n-1]){
           return make_pair(maxe,2);
       }
       else if(mine==arr[0] && maxe==arr[n-1]){
           return make_pair(maxe,1);
       }
       else if(arr[0]<arr[n-1]){
           return make_pair(maxe,3);
       }
       else{
           return make_pair(maxe,4);
       }
    }

};

//{ Driver Code Starts.

int main()
 {
    long long t;
    cin>>t;
    while(t--)
    {
        long long n;
        cin>>n;
        long long arr[n];
        for(int i = 0; i < n; i++)
            cin >> arr[i];
        Solution ob;
        pair<long long, int> pair = ob.maxNtype(arr, n);
        cout<<pair.first<<" "<<pair.second<<"\n";
    }
	return 0;
}
// } Driver Code Ends