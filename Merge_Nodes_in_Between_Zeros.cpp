// Problem link : https://leetcode.com/problems/merge-nodes-in-between-zeros/description/

class Solution {
public:
    ListNode* mergeNodes(ListNode* head) {
        head = head->next;
        ListNode* tmp1 = head;
        ListNode* tmp2 = head;
        int sum = 0;
        while(1)
        {
            if(tmp2->val == 0)
            {
                tmp1->val = sum;
                sum = 0;
                if(tmp2->next == NULL)
                {
                    tmp1->next = NULL;
                    break;
                }
                tmp1 = tmp1->next;
            }
            else
                sum += tmp2->val;            
            tmp2 = tmp2->next;
        }
        return head;
    }
};