// Problem link: https://leetcode.com/problems/intersection-of-two-linked-lists/description/

class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode* tempA = headA;
        ListNode* tempB = headB;
        while(tempA != tempB)
        {
            if(tempA == NULL) tempA = headB;
            else tempA = tempA->next;

            if(tempB == NULL) tempB = headA;
            else tempB = tempB->next;
        }
        return tempA;
    }
};