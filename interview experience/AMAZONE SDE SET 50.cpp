1.  Merge Intervals
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
};


2. reverse string
class Solution {
public:
    void reverseString(vector<char>& s) {
      // reverse(s.begin(),s.end());
      vector<int>p;
      for(int i=s.size()-1;i>=0;i--){
               p.push_back(s[i]);

      }
      s.clear();
      for(int i=0;i<p.size();i++){
               s.push_back(p[i]);

      }
    }
};
3.reverse a linked list
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode* pre=NULL;
        ListNode* next=NULL;
        ListNode* curr=head;
        while(curr!=NULL){
            next=curr->next;
            curr->next=pre;
            pre=curr;
            curr=next;
            
        }
        return pre;

    }
};
-------------------------------------------------------
  * KTH largest
  class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
       // sort(nums.begin(),nums.end());
        //return nums[(nums.size()-k)];
        priority_queue<int>q;
        for(int i=0;i<nums.size();i++){
            q.push(nums[i]);
        }
        for(int i=0;i<k-1;i++){
            q.pop();
        }
        return q.top();
    }
};
