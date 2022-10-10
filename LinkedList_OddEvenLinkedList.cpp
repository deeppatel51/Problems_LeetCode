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
    ListNode* oddEvenList(ListNode* head) {
        if(head==NULL || head->next==NULL)
            return head;
        ListNode* odd = head;
        ListNode* even = head->next;
        
        ListNode* pOdd = odd;
        ListNode* pEven = even;
        
        while(true)
        {
            if(pEven->next)
            {
                pOdd->next = pEven->next;
                pOdd = pOdd->next;
            }
            else
                break;
                
            if(pOdd->next)
            {
                pEven->next = pOdd->next;
                pEven = pEven->next;
            }
            else
                break;
        }
        
        pOdd->next = even;
        pEven->next = NULL;
        return odd;
    }
};
