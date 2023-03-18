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
        ListNode* start=new ListNode();//to handle case where we are asked to remove head;
        start->next=head;
        ListNode* fast=start;
        ListNode* slow=start;
        for(int i=1;i<=n;i++)
        
            fast=fast->next; //moves to node which is nth node from the front
            while(fast->next!=NULL)
            {
                fast=fast->next; //moves to end from position n from front
                slow=slow->next;//point to node before nth node from back ie node to be removed
            }
        slow->next=slow->next->next;
            
        
        return start->next;
    }
};