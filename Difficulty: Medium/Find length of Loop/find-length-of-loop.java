/*
class Node {
    int data;
    Node next;

    Node(int x) {
        data = x;
        next = null;
    }
}
*/

class Solution {
    public int lengthOfLoop(Node head) {
        // code here
        if(head == null && head.next == null){
            return 0;
        }
        
        Node slow = head;
        Node fast = head;
        
        while(fast.next!=null && fast.next.next!=null){
            fast = fast.next.next;
            slow = slow.next;
            
            if(fast == slow){
                int count = 1;
                slow = slow.next;
                while(slow!=fast){
                    slow= slow.next;
                    count++;
                }
                return count;
            }
            
        }
        return 0;
    }
}