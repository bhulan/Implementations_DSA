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
