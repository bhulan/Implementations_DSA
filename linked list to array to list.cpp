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
    ListNode* insertionSortList(ListNode* head) {
         ListNode* curr=head;
         vector<int>temp;
         while(curr!=NULL){
            temp.push_back(curr->val);
            curr=curr->next;
         }
         sort(temp.begin(),temp.end());
         curr=head;
         for(int i=0;i<temp.size();i++){
             curr->val=temp[i];
             curr=curr->next;
         }
         return head;
    }
};
