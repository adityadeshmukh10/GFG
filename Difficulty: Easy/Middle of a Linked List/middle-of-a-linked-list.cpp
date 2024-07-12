//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    struct Node* next;

    Node(int x) {
        data = x;
        next = NULL;
    }
};

void printList(Node* node) {
    while (node != NULL) {
        cout << node->data << " ";
        node = node->next;
    }
    cout << "\n";
}


// } Driver Code Ends
/* Link list Node
struct Node {
    int data;
    Node* next;

    Node(int x){
        data = x;
        next = NULL;
    }

}; */
class Solution {
  public:
    /* Should return data of middle node. If linked list is empty, then  -1*/
    int givecount(Node *head) {
        int count = 0;
        Node *curr = head;
        while (curr != NULL) {
            curr = curr->next;
            count++;
        }
        return count;
    }
    int getMiddle(Node *head) {
        // Your code here
        Node *temp = head;
        if(head==NULL)
        {
            return -1;
        }
        
        Node* slow=head;
        Node* fast=head;
        
        while(fast!=NULL && fast->next != NULL)
        {
            slow=slow->next;
            fast=fast->next->next;
        }
        
        int h = givecount(head);
        
        if(h%2!=0)
        {
            return slow->data;
        }
        else
        {
            //slow=slow->next;
            return slow->data;
        }
    }
};


//{ Driver Code Starts.

int main() {
    // code
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;
        int data;
        cin >> data;
        struct Node* head = new Node(data);
        struct Node* tail = head;
        for (int i = 0; i < N - 1; ++i) {
            cin >> data;
            tail->next = new Node(data);
            tail = tail->next;
        }

        Solution ob;
        cout << ob.getMiddle(head) << endl;
    }
    return 0;
}

// } Driver Code Ends