class Solution {
public:
void solve(int ind, vector<vector<string>>&ans,vector<string>&temp,string s){
    if(ind>=s.size())
    {
        ans.push_back(temp);
        return;
    }
    for(int i=ind;i<s.size();i++){
     if(possible(ind,i,s)){
         temp.push_back(s.substr(ind,i-ind+1));
         solve(i+1,ans,temp,s);
         temp.pop_back();
     }
    }
}
  bool possible(int start,int end,string s){
      while(start<=end){
          if(s[start]!=s[end])
          return false;
          start++;
          end--;
      }
      return true;
  }
    vector<vector<string>> partition(string s) {
        vector<vector<string>>ans;
        vector<string>temp;
        int ind=0;
        solve(ind,ans,temp,s);
        return ans;
    }
};
