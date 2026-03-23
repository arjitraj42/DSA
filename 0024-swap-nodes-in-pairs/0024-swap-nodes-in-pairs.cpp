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
    ListNode* swapPairs(ListNode* head) {
        ListNode* dummy = new ListNode(0);
        dummy->next = head;
        ListNode* curr = dummy;
        while(curr->next != NULL && curr ->next->next != NULL){
            ListNode* slow = curr->next;
            ListNode* fast = curr->next->next;

            slow->next = fast->next;
            fast->next = slow;
            curr->next = fast;
        curr = slow;
        }
        return dummy->next;

    }
};