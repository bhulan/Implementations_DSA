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
    ListNode* sortList(ListNode* head) {
        vector<int>take;
        ListNode* temp=head;
        while(temp!=NULL){
            take.push_back(temp->val);
            temp=temp->next;
        }
        sort(take.begin(),take.end());
        temp=head;
        for(int i=0;i<take.size();i++){
            temp->val=take[i];
            temp=temp->next;
        }
        return head;
    }
};
