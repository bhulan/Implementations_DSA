/*You are required to complete this function*/

class Solution{
    public:
    int maxLen(vector<int>&A, int n)
    {   
        // Your code here
         unordered_map<int,int>mp;
        int ans=0,sum=0;
        for(int i=0;i<A.size();i++){
        sum+=A[i];
            if(sum==0){
            ans=max(ans,i+1);
            }
            else if(mp.find(sum)!=mp.end()){
                ans=max(ans,i-mp[sum]);
            }
            else
                mp[sum]=i;
        }
        return ans;
        
    }
};
