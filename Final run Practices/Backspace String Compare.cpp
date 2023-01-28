class Solution {
public:
    bool backspaceCompare(string s, string t) {
       
        stack<int>st1;
        stack<int>st2;
        string k ,l;
        for(int i=0; i<s.size(); i++){
            if(s[i]=='#'){
                if(!st1.empty())
                    st1.pop();     
            }else
                st1.push(s[i]);
        }
        for(int i=0; i<t.size(); i++){
            if(t[i]=='#'){
                if(!st2.empty())
                    st2.pop();
            }else
                st2.push(t[i]);
        }
        while(!st1.empty()){
            k+=st1.top();
            st1.pop();
        }
        while(!st2.empty()){
            l+=st2.top();
            st2.pop();
        }
        if(k==l)
        return true;
        else
        return false;
    }
};
