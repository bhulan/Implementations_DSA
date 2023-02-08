typedef pair<int,char>declare;
class Solution {
public:
    string reorganizeString(string s) {
        string st="";
        unordered_map<char,int>map;
        for(auto it:s)
        map[it]++;
        priority_queue<declare>pq;
        for(auto it:map)
        pq.push({it.second,it.first});
        declare temp={0,'A'};
        while(pq.size()>0){
            declare topi=pq.top();
            pq.pop();
              st+=topi.second;
              topi.first--;
              if(temp.first>0)
              pq.push(temp);
              temp=topi;
        }
        if(s.size()==st.size())
        return st;
        else 
        return "";
    }
};
