// Problem link: https://leetcode.com/problems/swap-nodes-in-pairs/

// Bruteforce
class Solution {
public:
    ListNode* swapPairs(ListNode* head) {
        if(head == NULL || head->next == NULL)
            return head;

        ListNode* temp1 = head;
        ListNode* temp2 = head->next;

        while(1)
        {
            swap(temp1->val, temp2->val);
            temp1 = temp1->next->next;
            if(temp1==NULL)
                break;
            temp2 = temp2->next->next;
            if(temp2==NULL)
                break;
        }
        return head;
    }
};


// without swapping values
class Solution {
public:
    ListNode* swapPairs(ListNode* head) {
        if(head == NULL || head->next == NULL)
            return head;

        ListNode* first = head;
        ListNode* second = head->next;
        ListNode* prev = NULL;
        head = head->next;
        while(1)
        {
            first->next = second->next;
            second->next = first;
            if(prev != NULL)
                prev->next = second;

            prev = first;
            first = first->next;
            if(first == NULL)
                break;
            second = first->next;
            if(second == NULL)
                break;
        }
        return head;
    }
};