class Solution {
public:
    bool wordPattern(string pattern, string s) {
       vector<string>newstring;
       string temp="";
       int i=0;
       while(i<s.size()){
           if(s[i]==' '){
               newstring.push_back(temp);
               temp="";
           }
           else{
               temp +=s[i];
           }
           i++;
       }
       newstring.push_back(temp);
       unordered_map<char,string>m;
       set<string>set;
       if( pattern.size()!=newstring.size())
       return false;
       for(int j=0;j<pattern.size();j++){
           if(m.find(pattern[j])!=m.end()){
               if(m[pattern[j]]!=newstring[j])
               return false;
           }
           else{
               if(set.count(newstring[j])>0)
               return false;
           }
         m[pattern[j]]=newstring[j];
         set.insert(newstring[j]);  
       }
       return true; 
    }
};
