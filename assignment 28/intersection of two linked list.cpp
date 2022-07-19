/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    
       ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) 
	{
		ListNode* a=headA;
		ListNode* b=headB;
		if(a==b) return a;
		unordered_set<ListNode*> mp;
		while(a)
		{
			mp.insert(a);
			a = a->next;
		}
		while(b)
		{
			if(mp.find(b)!=mp.end()) return b; 
			mp.insert(b);
			b = b->next;
		}
		return NULL;

	}
};
