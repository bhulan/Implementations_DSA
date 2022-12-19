class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int r=0,l=0,len=0;
        int n=s.size();
        vector<int>m(256,-1);
        while(r<n){
            if(m[s[r]]!=-1)
                l=max(m[s[r]]+1,l);
            m[s[r]]=r;
                len=max(len,r-l+1);
            r++;
        }
        return len;
    }
};
