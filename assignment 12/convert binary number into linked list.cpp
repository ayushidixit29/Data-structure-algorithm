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
    int getDecimalValue(ListNode* head) {
        ListNode* temp;
        long long sum=0,count=-1;
        temp=head;
        while(temp!=NULL){
            count++;
            temp=temp->next;
        }
        temp=head;
        while(temp!=NULL && count>=0){
            if(temp->val==0){
                count--;
                temp=temp->next;
            } 
            else{
                sum=sum+pow(2,count);
                count--;
                temp=temp->next;
            }
        }
        return sum;
    }
};
