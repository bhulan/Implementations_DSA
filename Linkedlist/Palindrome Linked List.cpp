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
    bool isPalindrome(ListNode* head) {
        vector<int>a,b;
        ListNode* temp=head;
        while(temp!=NULL){
            a.push_back(temp->val);
            temp=temp->next;
        }
        b=a;
        reverse(a.begin(),a.end());
        if(a==b)
        return true;
        else
        return false;

    }

};
