#include <bits/stdc++.h> 
void sortStack(stack<int> &stack)
{
	// Write your code here
    priority_queue<int>q;
    while(!stack.empty()){
        q.push(stack.top());
        stack.pop();
    }
    while(!q.empty()){
        cout<<q.top()<<" ";
        q.pop();
    }
//     vector<int>ans;
//     while(!q.empty()){
//         ans.push_back(q.top());
//         q.pop();
//    }
//     for(int i=0;i<ans.size();i++){
//         cout<<ans[i]<<" ";
//     }
}
