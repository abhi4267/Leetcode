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
    bool hasCycle(ListNode *head) {
        if(head==NULL || head->next == NULL)return false;
         ListNode* slow = head, * fast = head ->next;
        while(fast!=NULL && fast->next!=NULL){
            if(fast == slow)  return true;
            if(fast->next->next)fast = fast->next;
            fast = fast->next;
            slow = slow ->next;
        }
        return false;
    }
};