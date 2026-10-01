class Solution {
    public boolean isPalindrome(ListNode head) {

        ListNode ch = new ListNode(head.val);
        ListNode cc = ch;
        ListNode original = head.next;

        while (original != null) {
            cc.next = new ListNode(original.val);
            cc = cc.next;
            original = original.next;
        }
        ListNode prev = null;
        ListNode curr = head;

        while (curr != null) {
            ListNode nxt = curr.next;
            curr.next = prev;
            prev = curr;
            curr = nxt;
        }

        ListNode temp = ch;
        curr = prev;

        while (curr != null && temp != null) {
            if (curr.val != temp.val) {
                return false;
            }

            curr = curr.next;
            temp = temp.next;
        }

        return true;
    }
}
