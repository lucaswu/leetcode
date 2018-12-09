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
    ListNode* reverseList(ListNode* head) {
      if(head == NULL)
           return NULL;
      ListNode *pCurrent = head; 
      ListNode *pPre = NULL;
      ListNode *pNext = NULL;
      while(pCurrent->next != NULL){
          pNext = pCurrent->next;
          pCurrent->next = pPre;
          pPre = pCurrent;
          pCurrent = pNext;
              
      }
       pCurrent->next = pPre;
       return pCurrent;
    }
};