/*
class Node{
    int data;
    Node next;
    Node(int a){  data = a; next = null; }
}*/

class Solution {
    public int getCount(Node head) {
        // code here
        if(head == null){
            return 0;
        }
        Node curr = head;
        int count = 0;
        while(curr!=null){
            curr = curr.next;
            count++;
        }
        return count;
    }
}