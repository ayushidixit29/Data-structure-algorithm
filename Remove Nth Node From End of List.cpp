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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if (head->next == NULL && n == 1)
            return NULL;
        ListNode* curr = head;
        int count = 0;
        while (curr != NULL) {
            count++;
            curr = curr->next;
        }
        if (count == n)
            return head->next;
        int cnt = count - n - 1;
        curr = head;
        while (cnt--) 
            curr = curr->next;
        curr->next = curr->next->next;
        return head;
    }
};
