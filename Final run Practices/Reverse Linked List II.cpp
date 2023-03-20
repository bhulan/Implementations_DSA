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
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        vector<int>v;
        ListNode* cur=head;
        while(cur!=NULL){
            v.push_back(cur->val);
            cur=cur->next;
        }
         ListNode* root=NULL;
         reverse(v.begin()+left-1, v.begin()+right);
        for(int i=v.size()-1; i>=0; i--){
            ListNode* temp=new ListNode;
            temp->val=v[i];
            temp->next=root;
            root=temp;
        }
        return root;
    }
};
