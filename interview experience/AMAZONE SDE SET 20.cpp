AD TWO LINKEDLIST
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* dummy=new ListNode();
        ListNode* temp=dummy;
        int carry=0;
        while(l1!=NULL || l2!=nullptr || carry!=0){
            int sum=0;
            if(l1!=NULL){
                sum=sum+l1->val;
                l1=l1->next;
            }
            if(l2!=NULL){
                sum=sum+l2->val;
                l2=l2->next;
            }
            sum=sum+carry;
            carry=sum/10;
            ListNode* n=new ListNode(sum%10);
            temp->next=n;
            temp=temp->next;
        }
        return dummy->next;
    }
};----------------------------------------------------------------
  ROTATE MATRIX
  class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int n=matrix.size();
        int m=matrix[0].size();
        for(int i=0;i<n;i++){
            for(int j=0;j<i;j++){
                 swap(matrix[i][j],matrix[j][i]);
            }
        }
        for(int i=0;i<n;i++){
            reverse(matrix[i].begin(),matrix[i].end());
        }
    }
};--------------------------------------------------------------
    MARGE I NTERVAL
    class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        vector<vector<int>>ans;
        vector<int>temp;
        sort(intervals.begin(),intervals.end());
        temp=intervals[0];
        for(auto it:intervals){
            if(temp[1]>=it[0]){
                temp[1]=max(it[1],temp[1]);
            }
            else{
                ans.push_back(temp);
                temp=it;
            }
        }
         ans.push_back(temp);
        return ans;
    }
};---------------------------------------------------------------------------------------
      ZIGZAG
      
     
class Solution {
public:
   vector<vector<int>>ans;
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        if(root==NULL)
        return ans;
        queue<TreeNode*>q;
        bool cheek=true;
        q.push(root);
        while(!q.empty()){
            int n=q.size();
            vector<int>temp(n);
            for(int i=0;i<n;i++){
                TreeNode* node=q.front();
               q.pop();
               if(node->left!=NULL)
               q.push(node->left);
               if(node->right!=NULL)
               q.push(node->right);
                int ind=(cheek)?i:(n-1-i);
               temp[ind]=node->val;
            }
            ans.push_back(temp);
            cheek=!cheek;;
        }
        return ans;
    }
};----------------------------------------------------------------------------------------------------
