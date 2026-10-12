class Solution {
    public ListNode addTwoNumbers(ListNode l1, ListNode l2) {
        ListNode l1Last = null;
        ListNode l2Last = null;
        ListNode res = l2;
        int rem = 0;

        while (l1 != null && l2 != null) {
            if (l1.next == null)
                l1Last = l1;
            if (l2.next == null)
                l2Last = l2;

            int sum = l1.val + l2.val + rem;
            rem = sum / 10;
            l2.val = sum % 10;

            l1 = l1.next;
            l2 = l2.next;
        }

        if (l1 == null) {
            while (l2 != null) {
                int sum = l2.val + rem;
                rem = sum / 10;
                l2.val = sum % 10;

                if (l2.next == null)
                    l2Last = l2;

                l2 = l2.next;
            }
        }

        if (l2 == null) {
            if (l1 != null) {
                l2Last.next = l1;
                l2 = l1;

                while (l2 != null) {
                    int sum = l2.val + rem;
                    rem = sum / 10;
                    l2.val = sum % 10;

                    if (l2.next == null)
                        l2Last = l2;

                    l2 = l2.next;
                }
            }
        }

        if (rem > 0) {
            l2Last.next = new ListNode(rem);
        }

        return res;
    }
}