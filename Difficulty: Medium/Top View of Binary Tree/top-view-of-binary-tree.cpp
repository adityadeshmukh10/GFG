//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// Tree Node
struct Node
{
    int data;
    Node* left;
    Node* right;
};

// Utility function to create a new Tree Node
Node* newNode(int val)
{
    Node* temp = new Node;
    temp->data = val;
    temp->left = NULL;
    temp->right = NULL;

    return temp;
}

// Function to Build Tree
Node* buildTree(string str)
{
    // Corner Case
    if (str.length() == 0 || str[0] == 'N')
        return NULL;

    // Creating vector of strings from input
    // string after spliting by space
    vector<string> ip;

    istringstream iss(str);
    for (string str; iss >> str; )
        ip.push_back(str);

    // Create the root of the tree
    Node* root = newNode(stoi(ip[0]));

    // Push the root to the queue
    queue<Node*> queue;
    queue.push(root);

    // Starting from the second element
    int i = 1;
    while (!queue.empty() && i < ip.size()) {

        // Get and remove the front of the queue
        Node* currNode = queue.front();
        queue.pop();

        // Get the current node's value from the string
        string currVal = ip[i];

        // If the left child is not null
        if (currVal != "N") {

            // Create the left child for the current node
            currNode->left = newNode(stoi(currVal));

            // Push it to the queue
            queue.push(currNode->left);
        }

        // For the right child
        i++;
        if (i >= ip.size())
            break;
        currVal = ip[i];

        // If the right child is not null
        if (currVal != "N") {

            // Create the right child for the current node
            currNode->right = newNode(stoi(currVal));

            // Push it to the queue
            queue.push(currNode->right);
        }
        i++;
    }

    return root;
}


// } Driver Code Ends
/*
struct Node
{
    int data;
    Node* left;
    Node* right;
};
*/
class Solution
{
    public:
    
    vector<int> topView(Node *root) {
        
        // If the root node is a null pointer , there is no tree
        // Hence , no top view
        
        if(root == nullptr) {
          return {};
        }
        
        // So, we return an empty vector
        
        
        queue< pair<Node *,int> > q; // This queue will help in Level Order Traversal
        vector<int> ans; // This vector will store the final answer
        map<int,int> m; // This is a map which stores the first node seen for  every horizontal level
        // while performing level wise traversal
        
        q.push( {root,0} ); // We push the root node
        
        m[0] = root -> data; // The root node is the first node seen for horizontal level 0
        // So we store it in the map
        
        int size; // This will store the size of the queue during traversal
        
        pair<Node *,int> front; // This will be used to point to the front of the queue while traversal
        
        while(!q.empty()) {
          size = q.size();
        
          for(int i = 0; i < size; i++) {
              
              front = q.front();
              q.pop();
              
              if(front.first -> left) {
                  q.push( {front.first -> left, front.second - 1});
                  int distance = front.second - 1;
                  
                  if(m.find(distance) == m.end()) { // If we haven't yet seen a node for the given horizontal level
                      m[distance] = front.first->left->data; // we will store it in the map
                  }
              }
              if(front.first -> right) {
                  q.push( {front.first -> right,front.second + 1} );
                  int distance = front.second + 1;
                  
                  if(m.find(distance) == m.end()) {// If we haven't yet seen a node for the given horizontal level
                      m[distance] = front.first->right->data;// we will store it in the map
                  }
              }
          }
          
      }
      
      // We will iterate over the map and store the nodes seen for each horizontal level from least to greatest
      // and put them in the vector
      for(auto x:m) {
        ans.push_back(x.second);
      }
      
      return ans; // We finally return the vector
        
    }
    

};


//{ Driver Code Starts.

int main() {
    int tc;
    cin>>tc;
    cin.ignore(256, '\n');
    while (tc--) {
        string treeString;
        getline(cin, treeString);
        Solution ob;
        Node *root = buildTree(treeString);
        vector<int> vec = ob.topView(root);
        for(int x : vec)
            cout<<x<<" ";
        cout<<endl;
    }
    return 0;
}
// } Driver Code Ends