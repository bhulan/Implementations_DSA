class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string ans="";
        for(int i=0;i<strs[0].size();i++){
            char ch=strs[0][i];
            bool p=true;
         for(int j=1;j<strs.size();j++){
             if(strs[j].size()<i || ch!=strs[j][i]){
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
