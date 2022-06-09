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
/* 
void deleteElementfromvector(vector<int>&A, int i)
*/

class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode *cur=head;
        while(cur)
        {
            ListNode * temp =cur->next;
            while( temp &&temp->val == cur->val)
            {
                temp=temp->next;
            }
            cur->next=temp;
            cur=cur->next;
        }
        return head;
        
     }
};
