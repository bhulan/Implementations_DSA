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
    void reorderList(ListNode* head) {
        vector<int> v;
        
        ListNode *temp = head;
        
        while(temp != NULL){
           v.push_back(temp->val);
           temp = temp->next;
        }

        int j = v.size()-1;
      
        int state = 0;
        temp = head;
      
        int k = 0;
        for(int i = 0; i<v.size();i++){
            if(state == 0){
                
                temp ->val = v[k];
                k++;
                state = 1;
            }
            else{
               
                temp ->val = v[j];
                j--;
                state  = 0;
            }
            temp = temp->next;
        }

      
    }
};
