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
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        if(l1 == NULL && l2 == NULL)
            return NULL;
        if(l1 == NULL && l2 != NULL)
            return l2;
        if(l1 != NULL && l2 == NULL)
            return l1;
        
        ListNode *pHead = NULL;
        if(l1->val > l2->val){
            pHead = l2;
            pHead->next = mergeTwoLists(l1,l2->next);
        }
        else{
            pHead = l1;
            pHead->next = mergeTwoLists(l1->next,l2);
        }
        
        return pHead;
        
    }
};