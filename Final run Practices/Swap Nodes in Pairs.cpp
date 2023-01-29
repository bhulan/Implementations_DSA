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
    ListNode* swapPairs(ListNode* head) {
        ListNode* temp=head;
        vector<int>take;
        while(temp!=NULL){
            take.push_back(temp->val);
            temp=temp->next;
        }
        if(take.size()<2)
        return head;
        for(int i=0;i<take.size()-1;i+=2){
             swap(take[i],take[i+1]);
        }
        temp=head;
        for(int i=0;i<take.size();i++){
             temp->val=take[i];
             temp=temp->next;
        }
        return head;
    }
};
