//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution{
  public:
    int minDist(int a[], int n, int x, int y)
    {
      
        int flag=0;
        int one =-1,two=-1;
        int min=INT_MAX;
         for(int i=0;i<n;i++)
         {
             if(a[i]==x)
             {
                 one=i;
             }
             if(a[i]==y)
             {
                 two=i;
             }
             if( (one !=-1 )&& (two !=-1))
             {
                 if(min>abs(one-two))
                {
                    min=abs(one -two);
                    flag=1;
                }
                 
             }
         }
         if( flag==0)
         {
             return -1;
         }
       
         return min;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) cin >> a[i];
        int x, y;
        cin >> x >> y;
        Solution obj;
        cout << obj.minDist(a, n, x, y) << endl;
    }
    return 0;
}

// } Driver Code Ends