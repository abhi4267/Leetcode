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
    ListNode* reverse(ListNode * head, int diff){
        if(diff == 0 || head == NULL || head->next == NULL){
            return head;
        }
        ListNode* chotaHead = reverse(head->next , --diff);
        head->next->next = head;
        head->next = NULL;
        return chotaHead;
    }
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        if(head->next == NULL){
            return head;
        }
        if(left == right) return head;
        ListNode * temp = head;
        ListNode * prev = NULL;
        int count = 1;
        while (count != left)
        {
            prev = temp;
            temp = temp->next;
            count++;
        }
        ListNode *temp2 = temp->next;
        int diff = right - left;
        do
        {
            temp2 = temp2->next;
        } while (--diff);

        ListNode *chotaHead = reverse(temp, right-left);
        temp->next = temp2;
        if(left == 1){
            return chotaHead;
        }
        prev->next = chotaHead;
        return head;
    }
};