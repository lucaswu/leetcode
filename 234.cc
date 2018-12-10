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
    bool isPalindrome(ListNode* head) {
        if(head == NULL ||  head->next == NULL)
            return true;
        ListNode *pFast= head;
        ListNode *pSlow = head;
        while(pFast->next != NULL && pFast->next->next != NULL){
            pSlow = pSlow->next;
            pFast = pFast->next->next;
        }   
        
        ListNode *pLast = pSlow->next;
        while(pLast->next != NULL){
            ListNode* pTemp = pLast->next;
            pLast->next = pTemp->next;
            pTemp->next = pSlow->next;
            pSlow->next = pTemp;
        }
        
        ListNode* pPre = head;
        while(pSlow->next != NULL){
            pSlow = pSlow->next;
            if(pPre->val != pSlow->val) return false;
            pPre = pPre->next;
        }
        
        return true;

        
    }
};