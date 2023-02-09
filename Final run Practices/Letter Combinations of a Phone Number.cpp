class Solution {
public:
void solve(int index,vector<string>&ans,string &s,string digits,string map[]){
    if(index>=digits.size())
    {
        ans.push_back(s);
        return;
    }
    int num=digits[index]-'0';
    string val=map[num];
    for(int i=0;i<val.size();i++){
        s.push_back(val[i]);
        solve(index+1,ans,s,digits,map);
     s.pop_back();
    }
}
    vector<string> letterCombinations(string digits) {
      int len=digits.size();
      vector<string>ans;
      string s="";
      if(len==0)
      return ans;
      string map[10]={" "," ","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
      int index=0;
      solve(index,ans,s,digits,map);
      return ans; 
    }
};
