Inversion of arrray
long long int inversionCount(long long arr[], long long N)
{
    // Your Code Here
    long long  ans=0;
    for(int i=0;i<N-1;i++){
        for(int j=i+1;j<N;j++){
            if(arr[i]>arr[j])
            ans++;
        }
        
    }
        return ans;
}
------------------------------------------------------------------------------------------------------------------
D TWO linked list
lass Solution {
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
};
-----------------------------------------------------------------------------------------------------------
  missing ans reapeting element
  class Solution{
public:
    int *findTwoElement(int *arr, int n) {
        // code here
        int k=0;
        long long mis=0;
        set<int>s;
        for(int i=0;i<n;i++){
            if(s.find(arr[i])==s.end())
            s.insert(arr[i]);
            else{
                k=arr[i];
                break;
            }
        }
        int sum=0;
        for(int i=0;i<n;i++){
            sum+=arr[i];
        }
        int tot=(n*(n+1))/2;
        int re=sum-k;
         mis=tot-re;
       int *ans = new int[2];
       ans[0]=k;
       ans[1]=mis;
       return ans;
    }
};
INSERTATON POIMNT OF A LINKED LIST
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        int lena=0,lenb=0;
        ListNode * tempa=headA;
        ListNode * tempb=headB;
        while(tempa!=NULL){
            lena++;
            tempa=tempa->next;
        }
         while(tempb!=NULL){
            lenb++;
            tempb=tempb->next;
        }
        tempa=headA;
        tempb=headB;
        int diff=abs(lena-lenb);
         if(lena>lenb){
           while(diff>0){
               tempa=tempa->next;
               diff--;
           }
        }
        else{
             while(diff>0){
               tempb=tempb->next;
               diff--;
           }
        }
        while(tempa->next!=tempb->next){
           tempa=tempa->next;
           tempb=tempb->next; 
        }
        return tempa->next;

    }
};
---------------------------------------------------------------------------------------------------
N METTINGS  problem 
class Solution
{
    public:
    //Function to find the maximum number of meetings that can
    //be performed in a meeting room.
    int maxMeetings(int start[], int end[], int n)
    {
        // Your code here
        int ans=1;
        vector<pair<int,int>>v;
        for(int i=0;i<n;i++){
            v.push_back({end[i],start[i]});
        }
        
        sort(v.begin(),v.end());
        pair<int,int>p=v[0];
        for(int i=1;i<n;i++){
            if(v[i].second>p.first){
                ans++;
                p=v[i];
            }
        }
        return ans;
    }
};
-----------------------------------------------------------------------------------------------------------------------------
JOB SEQUENCE REMAINING

