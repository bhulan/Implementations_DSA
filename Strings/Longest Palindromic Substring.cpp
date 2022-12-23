class Solution {
public:
    string longestPalindrome(string S) {
        int start=0, end=0;
          int n=S.size();
          for(int i=1;i<S.size();i++){
              int s=i-1,e=i;
              while(s>=0 && e<S.size() && S[s]==S[e]){
                  if(e-s>end-start){
                      start=s;
                      end=e;
                  }
                  s--;
                  e++;
              }

          }
           for(int i=1;i<S.size();i++){
              int s=i-1,e=i+1;
              while(s>=0 && e<S.size() && S[s]==S[e]){
                  if(e-s>end-start){
                      start=s;
                      end=e;
                  }
                  s--;
                  e++;
              }
              
          }
          string ans;
          for(int i=start;i<=end;i++){
              ans+=S[i];
          }
          return ans;
    }
};
