class Solution {
    public ListNode mergeTwoLists(ListNode list1, ListNode list2) {
        if(list1 == null)
            return list2;
        else if(list2 == null)
                return list1;
        ListNode head = null;
        ListNode tail = null;

        while (list1 != null && list2 != null) {
            if (list1.val <= list2.val) {
                ListNode temp = list1;
                list1 = list1.next;

                if (head == null) {
                    head = temp;
                    tail = temp;
                } else {
                    tail.next = temp;
                    tail = temp;
                }
            } else {
                ListNode temp = list2;
                list2 = list2.next;

                if (head == null) {
                    head = temp;
                    tail = temp;
                } else {
                    tail.next = temp;
                    tail = temp;
                }
            }
        }
        if (list1 != null) {
            tail.next = list1;
        } else {
            tail.next = list2;
        }

        return head;
    }
}