//{ Driver Code Starts
// Initial Template for C++
//  C program to find n'th Node in linked list
#include <bits/stdc++.h>
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

/* Link list Node */
struct Node {
    int data;
    struct Node *next;

    Node(int x) {
        data = x;
        next = NULL;
    }
};

/* Function to get the kth node from the last of a linked list*/
int getKthFromLast(struct Node *head, int k);

/* Driver program to test above function*/

// } Driver Code Ends
/* struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};*/

// Function to find the data of kth node from the end of a linked list.
class Solution {
public:
    // Function to count the number of nodes in the linked list
    int givecount(Node *head) {
        int count = 0;
        Node *curr = head;
        while (curr != NULL) {
            curr = curr->next;
            count++;
        }
        return count;
    }

    // Function to get the k-th element from the end of the linked list
    int getKthFromLast(Node *head, int k) {
        if (head == NULL) {
            return -1;  // Return a sentinel value or handle the empty list case appropriately
        }

        // Get the total number of nodes in the list
        int h = givecount(head);

        // If k is greater than the length of the list, return a sentinel value or handle appropriately
        if (k > h) {
            return -1; // Return a sentinel value or handle appropriately
        }

        // Calculate the position of the k-th node from the start (0-indexed)
        int positionFromStart = h - k;

        Node *temp = head;

        // Move to the (h - k)-th node
        for (int i = 0; i < positionFromStart; i++) {
            temp = temp->next;
        }

        // Return the data of the k-th node from the end
        return temp->data;
    }
};



//{ Driver Code Starts.

int main() {
    int T, i, n, l, k;

    cin >> T;

    while (T--) {
        struct Node *head = NULL, *tail = NULL;

        cin >> n >> k;
        int firstdata;
        cin >> firstdata;
        head = new Node(firstdata);
        tail = head;
        for (i = 1; i < n; i++) {
            cin >> l;
            tail->next = new Node(l);
            tail = tail->next;
        }
        Solution obj;
        cout << obj.getKthFromLast(head, k) << endl;
    }
    return 0;
}
// } Driver Code Ends