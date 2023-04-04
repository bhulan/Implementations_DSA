1.VALID TRIANGLE NUMBER

class Solution {
public:
    int triangleNumber(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int ans=0;
        for(int i=nums.size()-1;i>=2;i--){
             int lo=0;
            int hi=i-1;
            while(lo<hi){
            if(nums[i]<nums[hi]+nums[lo]){
                ans+=(hi-lo);
                hi--;
            }
            else
            {
                lo++;
            }
            }
        }
        return ans;
    }
};
--------------------------------------------------------------------------
  2.DECTED A CYCLE IN LINKED LIST
  class Solution {
public:
    bool hasCycle(ListNode *head) {
        ListNode *fast=head;
        ListNode *slow=head;
        while(fast!=NULL && fast->next!=NULL){
            fast=fast->next->next;
            slow=slow->next;
            if(fast==slow)
            return true;
        }
        return false;
    }
};----------------------------------------------------------
  Longest Substring Without Repeating Characters
      
      
      class Solution {
public:
    int lengthOfLongestSubstring(string s) {
      int st=0,end=0,ans=0,p=0;
      set<char>sett;
      while(st<s.size()){
          auto it=sett.find(s[st]);
          if(it==sett.end()){
              sett.insert(s[st]);
              p=st-end+1;
              ans=max(p,ans);
              st++;
          }
          else{
              sett.erase(s[end]);
              end++;
          }
      }  
      return ans; 
    }
}; 
