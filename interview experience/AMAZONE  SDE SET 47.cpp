-----------------------------------AMAZONE SET 47----------------------------
1.Minimum Absolute Difference


class Solution {
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& arr) {
        sort(arr.begin(),arr.end());
        vector<vector<int>>ans;
        int mini=INT_MAX;
        for(int i=0;i<arr.size()-1;i++){
            if(mini>arr[i+1]-arr[i])
             mini=arr[i+1]-arr[i];
        }
        for(int i=0;i<arr.size()-1;i++){
            vector<int>v;
         if(arr[i+1]-arr[i]==mini){
           ans.push_back({arr[i],arr[i+1]});
         }
        }
        return ans;
    }
};
----------------------------------------------------------------------------------
  2.Longest Palindromic Substring
  
  class Solution {
public:
    string longestPalindrome(string S) {
      int Start=0,end=0;
      int n=S.size();
      //for even n size
      for(int i=1;i<n;i++){
          int s=i-1,e=i;
          while(s>=0 && e<n && S[s]==S[e]){
              if(e-s>end-Start){
                  Start=s;
                  end=e;
              }
              s--;
              e++;
          }
      } 
// for odd size()
       for(int i=1;i<n;i++){
          int s=i-1,e=i+1;
          while(s>=0 && e<n && S[s]==S[e]){
              if(e-s>end-Start){
                  Start=s;
                  end=e;
              }
              s--;
              e++;
          }
      }
      string ans="";
      for(int i=Start;i<=end;i++){
          ans+=S[i];
      } 
      return ans; 
    }
};

-------------------------------------------------------------------------------------------------------------------
  3.Linked List Cycle II
  
  
  /**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
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
  4.Capacity To Ship Packages Within D Days
  
  class Solution {
public:
bool solve(int mid,vector<int>& weights,int days){
    int d=1;
   int sum=0;
    for(int i=0;i<weights.size();i++){
        if(sum+weights[i]<=mid){
            sum+=weights[i];
        }
        else{
            sum=weights[i];
            d++;
        }

    }
    if(d<=days)
    return true;
    else
    return false;
}
    int shipWithinDays(vector<int>& weights, int days) {
       int hi=0,lo=0;
       int ans=0;
       for(int i=0;i<weights.size();i++){
           hi+=weights[i];
           if(lo<weights[i])
           lo=weights[i];
       }
       while(lo<=hi){
           int mid=(lo+hi)/2;
           if(solve(mid,weights,days)){
               ans=mid;
               hi=mid-1;
             
           }
           else
                    lo=mid+1;
       } 
       return ans;
    }
};
---------------------------------------------------------------------------------------------------------
  5. Reverse Nodes in k-Group
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
    ListNode* reverseKGroup(ListNode* head, int k) {
        ListNode* cur=head;
        for(int i=0;i<k;i++){
            if(cur==NULL)
                return head;
                cur=cur->next;
    
        }
            ListNode* pre=NULL;
             ListNode* next;
              ListNode* curr=head;
              int c=0;
              while(curr!=NULL && c<k){
                  next=curr->next;
                  curr->next=pre;
                  pre=curr;
                  curr=next;
                  c++;
        }
        head->next=reverseKGroup(next,k);
        return pre;
    }
};
  ------------------------------------------------------------CORE-----------------------------------
Why does thrashing occur? 
Explain Priority Scheduling
  
