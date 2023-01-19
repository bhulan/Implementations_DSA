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
