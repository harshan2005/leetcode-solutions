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
    ListNode* insertionSortList(ListNode* head) {
        ListNode* dummy = new ListNode(0);

        while (head != nullptr) {
            ListNode* curr = dummy;

            while (curr->next != nullptr && curr->next->val < head->val) {
                curr = curr->next;
            }

            ListNode* next = head->next;
            head->next = curr->next;
            curr->next = head;
            head = next;
        }

        ListNode* sortedHead = dummy->next;
        delete dummy;
        return sortedHead;
    }
};