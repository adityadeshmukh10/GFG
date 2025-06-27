/*  Node is defined as
  struct Node {
    int data;
    struct Node *next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};*/
class Solution {
  public:
    Node* segregate(Node* head) {
        // code here
        int count0 = 0;
        int count1 = 0;
        int count2 = 0;
        
        Node *curr = head;
        while(curr!=NULL)
        {
            if(curr->data == 0)
            {
                count0++;
            }
            else if(curr->data == 1)
            {
                count1++;
            }
            else{
                count2++;
            }
            curr = curr->next;
        }
        Node *temp = head;
        for(int i=0;i<count0;i++)
        {
            temp->data = 0;
            temp = temp->next;
        }
        for(int j=0;j<count1;j++)
        {
            temp->data = 1;
            temp = temp->next;
        }
        for(int k=0;k<count2;k++)
        {
            temp->data = 2;
            temp = temp->next;
        }
        return head;
    }
};