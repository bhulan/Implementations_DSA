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
    ListNode* removeElements(ListNode* head, int x) {
        vector<int>ans;
        ListNode* temp=head;
        while(temp!=NULL){
            if(temp->val==x){
                temp=temp->next; 
            }
            else{
                ans.push_back(temp->val);
            temp=temp->next;
            }
        }
        ListNode* root=NULL;
        int l=0;
        if(ans.size()==0)
        return NULL;
        else{
        for(int i=ans.size()-1;i>=0;i--){
          ListNode* temp=new ListNode;
            temp->val=ans[i];
            temp->next=root;
            root=temp;
            }
            return root;
        }
    }
};







