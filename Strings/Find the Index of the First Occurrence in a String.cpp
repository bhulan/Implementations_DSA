class Solution {
public:
    int strStr(string haystack, string needle) {
       int c=0,i=0,j=0;
       if(needle.size()==0)
       return 0;
       while(i<haystack.size() && j<needle.size()){
           if(haystack[i]==needle[j]){
               c++;
               j++;
           }
           else
           {
               
               i=i-c;
               j=0;
               c=0;
           }
           i++;
       } 
       if(c==needle.size())
       return i-c;
       else
       return -1;
    }
};
