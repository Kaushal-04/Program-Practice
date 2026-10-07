class Solution {
    public ListNode reverseList(ListNode head) {
        ListNode prev = null;
        ListNode curr = head;
        while (curr != null) {
            ListNode nxt = curr.next;
            curr.next = prev;
            prev = curr;
            curr = nxt;
        }
        return prev;
    }

    public ListNode reverseBetween(ListNode head, int left, int right) {
        ListNode dummy = new ListNode(0);
        dummy.next = head;
        ListNode prevstart = dummy;

        for (int i = 1; i < left; i++) {
            prevstart = prevstart.next;
        }
        ListNode end = prevstart.next;

        for (int i = left; i < right; i++) {
            end = end.next;
        }
        ListNode nextend = end.next;
        end.next = null;
        ListNode revhead = prevstart.next;
        ListNode temp = reverseList(revhead);
        prevstart.next = temp;
        revhead.next = nextend;

        return dummy.next;
    }
}
