// Problem link: https://leetcode.com/problems/merge-two-sorted-lists/description/

class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        if(list1 == NULL) return list2;
        if(list2 == NULL) return list1;

        ListNode* head;
        ListNode* temp1 = list1;
        ListNode* temp2 = list2;

        if(temp1->val < temp2->val)
        {
            head = temp1;
            temp1 = temp1->next;
        }
        else
        {
            head = temp2;
            temp2 = temp2->next;
        }
        ListNode* curr = head;
        while(temp1 != NULL && temp2 != NULL)
        {
            if(temp1->val < temp2->val)
            {
                curr->next = temp1;
                temp1 = temp1->next;
            }
            else
            {
                curr->next = temp2;
                temp2 = temp2->next;
            }
            curr = curr->next;
        }
        if(temp1 != NULL)
            curr->next = temp1;
        if(temp2 != NULL)
            curr->next = temp2;

        return head;
    }
};