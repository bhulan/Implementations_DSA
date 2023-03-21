class Solution {
public:
    string frequencySort(string s) {
        priority_queue<pair<int,char>>pq;
        map<char,int>m;
        for(int i=0;i<s.size();i++){
            m[s[i]]++;
        }
        string k="";
        for(auto it:m){
            pq.push({it.second,it.first});
        }
        
        while(!pq.empty()){
            for(int i=0;i<pq.top().first;i++){
                k+=pq.top().second;

            }
            pq.pop();
        }
        return k;
    }
};
