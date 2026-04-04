/*
Structure of node class is:
class Node {
    int data;
    Node next;

    public Node(int data){
        this.data = data;
        this.next = null;
    }
}
*/

class Solution {
    public Node insertInMiddle(Node head, int x) {
        Node newNode = new Node(x);
        if(head == null){
            return newNode;
        }
        // Code here
        Node p = head;
        Node q = head;
        
        while(q.next != null && q.next.next != null){
            p = p.next;
            q = q.next.next;
        }
        
        newNode.next = p.next;
        p.next = newNode;
        return head;
    }
}