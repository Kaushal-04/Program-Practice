//Approach : first copy the original ll without random and HashMap the original and correponsing new node then again iterate and fill random node.

/*
// Definition for a Node.
class Node {
    int val;
    Node next;
    Node random;

    public Node(int val) {
        this.val = val;
        this.next = null;
        this.random = null;
    }
}
*/

class Solution {
    public Node copyRandomList(Node head) {
        if(head == null)
            return null;
        HashMap<Node, Node> ogNew = new HashMap<>();
        Node newList = new Node(head.val);
        Node res = newList;
        ogNew.put(head, newList);
        Node original = head.next;
        while(original != null){
            Node temp = new Node(original.val);
            ogNew.put(original, temp);
            newList.next = temp;
            newList = newList.next;
            original = original.next;
        }
        original = head;
        newList = res;
        while(original != null){
            if(original.random != null)
                newList.random = ogNew.get(original.random);
            original = original.next;
            newList = newList.next;
        }
        return res;
    }
}
