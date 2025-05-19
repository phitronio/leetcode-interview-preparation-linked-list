// problem link: https://leetcode.com/problems/remove-nth-node-from-end-of-list/description/

class Solution {
public:
    int size(ListNode* temp)
    {
        int cnt = 0;
        while(temp != NULL)
        {
            cnt++;
            temp = temp->next;
        }
        return cnt;
    }
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int sz = size(head);
        int idx = sz - n;
        if(idx ==  0)
        {
            head = head->next;
        }
        else
        {
            ListNode* temp = head;
            for(int i=0;i<idx-1;i++)
            {
                temp = temp->next;
            }
            temp->next = temp->next->next;
        }
        return head;
    }
};