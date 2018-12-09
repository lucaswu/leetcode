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
    ListNode* removeElements(ListNode* head, int val) {
        while(head!=NULL&&head->val==val) head=head->next; //[1,1] 1
        
        if(head == NULL)
            return NULL;
         
        
        ListNode *pCurrent = head;
        while(pCurrent->next != NULL ){
            if(pCurrent->next->val == val){
             pCurrent->next = pCurrent->next->next;   

            }
            else{
                
                pCurrent= pCurrent->next;
            }
            
        }
        
        return head;
    }
};