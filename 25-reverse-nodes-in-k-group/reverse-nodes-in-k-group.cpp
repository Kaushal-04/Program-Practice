/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
    // Helper to reverse a list segment and return new head
    ListNode* revG(ListNode* head) {
        ListNode* prevN = nullptr;
        ListNode* currN = head;
        while (currN != nullptr) {
            ListNode* nextN = currN->next;
            currN->next = prevN;
            prevN = currN;
            currN = nextN;
        }
        return prevN; // Return new head of reversed segment
    }

public:
    ListNode* reverseKGroup(ListNode* head, int k) {
        if (head == nullptr || k == 1) return head;

        // Dummy node to ease head handling
        ListNode* dummy = new ListNode(0);
        dummy->next = head;
        ListNode* prevGroupEnd = dummy;

        while (true) {
            ListNode* kth = prevGroupEnd;
            for (int i = 0; i < k && kth != nullptr; ++i) {
                kth = kth->next;
            }

            if (kth == nullptr) break;  // Not enough nodes

            ListNode* groupStart = prevGroupEnd->next;
            ListNode* nextGroupStart = kth->next;
            kth->next = nullptr;
            ListNode* reversedHead = revG(groupStart);
            prevGroupEnd->next = reversedHead;
            groupStart->next = nextGroupStart;
            prevGroupEnd = groupStart;
        }

        return dummy->next;
    }
};
