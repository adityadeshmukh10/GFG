//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
    public:
    //arr1,arr2 : the arrays
    // n, m: size of arrays
    //Function to return a list containing the union of the two arrays. 
    vector<int> findUnion(int arr1[], int arr2[], int n, int m)
    {
        //Your code here
        //return vector with correct order of elements
        map<int, int> mp;
        
        // Insert elements from the first array into the map
        for (int i = 0; i < n; i++) {
            mp[arr1[i]]++;
        }
        
        // Insert elements from the second array into the map
        for (int i = 0; i < m; i++) {
            mp[arr2[i]]++;
        }

        // Create a vector to store the union elements
        std::vector<int> v;
        
        // Insert keys from the map to the vector
        for (auto it = mp.begin(); it != mp.end(); ++it) {
            v.push_back(it->first);
        }
        
        // Return the sorted vector (the map keys are already sorted)
        return v;
    }
};

//{ Driver Code Starts.

int main() {
	
	int T;
	cin >> T;
	
	while(T--){
	    
	    
	    
	    int N, M;
	    cin >>N >> M;
	    
	    int arr1[N];
	    int arr2[M];
	    
	    for(int i = 0;i<N;i++){
	        cin >> arr1[i];
	    }
	    
	    for(int i = 0;i<M;i++){
	        cin >> arr2[i];
	    }
	    Solution ob;
	    vector<int> ans = ob.findUnion(arr1,arr2, N, M);
	    for(int i: ans)cout<<i<<' ';
	    cout << endl;
	    
	}
	
	return 0;
}
// } Driver Code Ends