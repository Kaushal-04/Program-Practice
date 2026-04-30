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
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* result = new ListNode();
        ListNode* curr = result;
        string s1="";
        while(l1){
            s1 += l1->val + '0';
            l1 = l1 -> next;
        }
        string s2="";
        while(l2){
            s2 += l2->val + '0';
            l2 = l2 -> next;
        }

        if(s1.length() < s2.length()){
            while(s1.length() != s2.length()){
                s1 += '0';
            }
        }
        if(s1.length() > s2.length()){
            while(s1.length() != s2.length()){
                s2 += '0';
            }
        }


        bool carry = false;
        for(int i=0; i<s1.length(); i++){
            
            int s;
            if(carry)
                s = (s1[i] - '0') + (s2[i] - '0') + 1;
            else
                s = (s1[i] - '0') + (s2[i] - '0');
            ListNode* temp = new ListNode();
            temp -> val = s % 10;
            if(s > 9)
                carry = true;
            else
                carry = false;
            curr->next = temp;
            curr = curr->next; 
        }
        if(carry){
            ListNode* temp = new ListNode();
            temp->val = 1;
            curr->next = temp;
            curr = curr->next; 
        }
        return result -> next;
    }
};