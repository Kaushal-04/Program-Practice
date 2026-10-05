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

    public ListNode rotateRight(ListNode head, int k) {
        if (head == null || head.next == null) {
            return head;
        }
        int len = 0;
        ListNode temp = head;
        while (temp != null) {
            len++;
            temp = temp.next;
        }
        k = k % len;
        if (k == 0) {
            return head;
        }
        ListNode revhead = reverseList(head);
        ListNode newhead = revhead;
        ListNode prev = null;

        while (k > 0) {
            prev = newhead;
            newhead = newhead.next;
            k--;
        }

        prev.next = null;
        ListNode part1 = reverseList(revhead);
        ListNode part2 = reverseList(newhead);
        ListNode it = part1;
        while (it.next != null) {
            it = it.next;
        }

        it.next = part2;
        return part1;
    }
}