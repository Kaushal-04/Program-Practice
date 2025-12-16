/**
 * Definition for singly-linked list.
 * public class ListNode {
 *     int val;
 *     ListNode next;
 *     ListNode() {}
 *     ListNode(int val) { this.val = val; }
 *     ListNode(int val, ListNode next) { this.val = val; this.next = next; }
 * }
 */
class Solution {

    public ListNode rotateRight(ListNode head, int k) {
        if(head == null || head.next == null || k == 0)
            return head;
        ListNode c = head;
        int count = 1;
        while((c.next).next != null){
            c = c.next;
            count ++;
        }
        count++;
        k = k % count;
        while(k > 0){
            ListNode temp = head;
            while((temp.next).next != null){
                temp = temp.next;
            }
            ListNode front = head;
            head = temp.next;
            head.next = front;
            temp.next = null;
            k--;
        }
        return head;
    }
}