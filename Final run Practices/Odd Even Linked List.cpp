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
      ListNode* temp=head;
      vector<int>take1;
      vector<int>take2;
      int i=0;
      while(temp!=NULL){
          if(i%2==0){
          take1.push_back(temp->val);
          temp=temp->next;
          i++;
          }
          else{
         take2.push_back(temp->val);
          temp=temp->next;
          i++;
          }
      }
      temp=head;
      for(int i=0;i<take1.size();i++){
          temp->val=take1[i];
          temp=temp->next;
      }
      for(int i=0;i<take2.size();i++){
          temp->val=take2[i];
          temp=temp->next;
      }

      return head;
    }
};
