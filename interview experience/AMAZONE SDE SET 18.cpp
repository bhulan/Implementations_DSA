1.Linked List Cycle II
class Solution {
public:
    ListNode *detectCycle(ListNode *head)
     {
        ListNode *fast=head;
        ListNode *slow=head;
        bool p=true;
     while(fast!=NULL && fast->next!=NULL){
         fast=fast->next->next;
         slow=slow->next;
         if(fast==slow){
             p=false;
             break;
         }
     }
     fast=head;
     if(p){
        
        return NULL;
     }
     while(fast!=slow){
            fast=fast->next;
            slow=slow->next;
        }
        return slow;
    
    }
};
------------------------------------------------------------------------------------
  2.PATH SUM II
  class Solution {
public:
void solve(vector<vector<int>>&ans,vector<int>temp,TreeNode* root, int targetSum){
    if(root==NULL)
    return;
    if(root->left==NULL && root->right==NULL){
        temp.push_back(root->val);
        targetSum-=root->val;
        if(targetSum==0)
        ans.push_back(temp);
        return;
    }
     temp.push_back(root->val);
     if(root->left!=NULL){
        solve(ans,temp, root->left,targetSum-root->val); 
     }
     if(root->right!=NULL){
        solve(ans,temp, root->right,targetSum-root->val); 
     }
}
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        vector<vector<int>>ans;
        vector<int>temp;
        solve(ans,temp,root,targetSum);
        return ans;
    }
};--------------------------------------------------------------------------------------
3 SEAERCH IN 2D MATRIX
class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int col=matrix.size();
        int row=matrix[0].size();
        int h=(col*row)-1;
        int l=0;
        while(l<=h){
            int mid=(l+h)/2;
            if(matrix[mid/row][mid%row]==target)
            {
                return true;
                break;
            }
            else if(matrix[mid/row][mid%row]<target)
                 {
                     l=mid+1;
                 }
                 else
                 h=mid-1;
        }
        return false;
    }
};
