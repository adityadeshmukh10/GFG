//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h> 
using namespace std; 

struct Node
{
    int data;
    struct Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
};

void printList(Node* node) 
{ 
    while (node != NULL) { 
        cout << node->data%10; 
        node = node->next; 
    }  
    cout<<"\n";
} 


// } Driver Code Ends
//User function template for C++

/* 

struct Node
{
    int data;
    struct Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
};

*/

class Solution
{
    public:
    Node* addOne(Node *head) 
    {
        // Your Code here
        // return head of list after adding one
        Node* curr = head;
    Node* temp = head;
    while(curr -> next) {
        if(curr->data < 9 && curr->next->data == 9)
            temp = curr;
        curr = curr->next;
    }
    if(curr->data == 9) {
        if(temp -> data == 9) {
            temp = new Node(0);
            temp -> next = head;
            head = temp;
        }
        temp -> data = temp -> data + 1;
        temp = temp -> next;
        while(temp) {
            temp -> data = 0;
            temp = temp -> next;
        }
    } else {
        curr->data = curr->data + 1;
    }
    return head;
    }
};

//{ Driver Code Starts.

int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        
        Node* head = new Node( s[0]-'0' );
        Node* tail = head;
        for(int i=1; i<s.size(); i++)
        {
            tail->next = new Node( s[i]-'0' );
            tail = tail->next;
        }
        Solution ob;
        head = ob.addOne(head);
        printList(head); 
    }
    return 0; 
} 

// } Driver Code Ends