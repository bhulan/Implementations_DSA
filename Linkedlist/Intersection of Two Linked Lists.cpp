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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        int lena=0,lenb=0;
        ListNode * tempa=headA;
        ListNode * tempb=headB;
        while(tempa!=NULL){
            lena++;
            tempa=tempa->next;
        }
         while(tempb!=NULL){
            lenb++;
            tempb=tempb->next;
        }
        tempa=headA;
        tempb=headB;
        int diff=abs(lena-lenb);
         if(lena>lenb){
           while(diff>0){
               tempa=tempa->next;
               diff--;
           }
        }
        else{
             while(diff>0){
               tempb=tempb->next;
               diff--;
           }
        }
        while(tempa!=tempb){
           tempa=tempa->next;
           tempb=tempb->next; 
        }
        return tempa;

    }
};
