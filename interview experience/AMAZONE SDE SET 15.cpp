Stock buy and sell

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int ans=0;
        int sum=INT_MAX;
        for(int i=0;i<prices.size();i++){
            sum=min(sum,prices[i]);
            ans=max(ans,prices[i]-sum);
        }
        return ans;
    }
};
=-----------------------------------------------------------------------
  2-sum problem
  class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n=nums.size();
        int a=0;
      int  b=0;
        for(int i=0;i<n-1;i++){
         for(int j=i+1;j<n;j++){
             if(nums[i]+nums[j]==target){
                 a=i;
                 b=j;
                 break;
             }
         }
        }
        return {a,b};
        
    }
};
34.
  class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string ans="";
        for(int i=0;i<strs[0].size();i++){
            char ch=strs[0][i];
            bool p=true;
            for(int j=1;j<strs.size();j++){
                if(ch!=strs[j][i] ){
                    p=false;
                    break;
                }
               
            }
             if(p)
                ans.push_back(ch);
            else
                break;
        }
        return ans;

    }
};


Reverse Words in a String
class Solution {
public:
    string reverseWords(string s) {
       string temp="";
       string ans="";
       for(int i=0;i<s.size();i++){
           if(s[i]==' '){
               if(temp!=""){
                   ans=temp+' '+ans;
                   temp="";
               }
           }
           else
           temp+=s[i];
       } 
       if(temp!="")
       ans=temp+' '+ans;
       ans.pop_back();
       return ans;
    }
};

=---------------------------------------------------------------------------------------
  Remove Nth Node From End of List
  /*
 */
class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
      ListNode* fast=head;  
       ListNode* slow=head;
       for(int i=0;i<n;i++){
           fast=fast->next;
       } 
       if(fast==NULL){
           return head->next;
       }
       while(fast->next!=NULL){
           fast=fast->next;
           slow=slow->next;
       }
        slow->next=slow->next->next;
        return head;
    }
};
