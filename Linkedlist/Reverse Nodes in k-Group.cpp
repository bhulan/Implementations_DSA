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
    ListNode* reverseKGroup(ListNode* head, int k) {
        ListNode* cur=head;
        for(int i=0;i<k;i++){
            if(cur==NULL)
                return head;
                cur=cur->next;
    
        }
            ListNode* pre=NULL;
             ListNode* next;
              ListNode* curr=head;
              int c=0;
              while(curr!=NULL && c<k){
                  next=curr->next;
                  curr->next=pre;
                  pre=curr;
                  curr=next;
                  c++;
        }
        head->next=reverseKGroup(next,k);
        return pre;
    }
};
