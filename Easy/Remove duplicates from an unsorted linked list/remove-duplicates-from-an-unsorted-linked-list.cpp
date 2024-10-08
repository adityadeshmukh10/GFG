//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};

void print(Node *root)
{
Node *temp = root;
while(temp!=NULL)
{
cout<<temp->data<<" ";
temp=temp->next;
}
}


// } Driver Code Ends
/*
The structure of linked list is the following

struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};
*/


class Solution
{
    public:
    // Function to remove duplicates from unsorted linked list.
    Node* removeDuplicates(Node* head) 
    {
        if (!head) return nullptr; // Edge case: if the list is empty

        set<int> seen;
        Node* prev = nullptr;
        Node* curr = head;
        
        while (curr != nullptr) 
        {
            if (seen.find(curr->data) != seen.end()) 
            {
                // Duplicate found, skip the current node
                prev->next = curr->next;
            } 
            else 
            {
                // Not a duplicate, insert the data into the set
                seen.insert(curr->data);
                prev = curr;
            }
            curr = curr->next;
        }
        return head;
    }
};



//{ Driver Code Starts.

int main() {
	// your code goes here
	int T;
	cin>>T;
	
	while(T--)
	{
		int K;
		cin>>K;
		struct Node *head = NULL;
        struct Node *temp = head;
 
		for(int i=0;i<K;i++){
		int data;
		cin>>data;
			if(head==NULL)
			head=temp=new Node(data);
			else
			{
				temp->next = new Node(data);
				temp=temp->next;
			}
		}
		
	    Solution ob;
		Node *result  = ob.removeDuplicates(head);
		print(result);
		cout<<endl;
		
	}
	return 0;
}
// } Driver Code Ends