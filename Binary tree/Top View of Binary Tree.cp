/*
struct Node
{
    int data;
    Node* left;
    Node* right;
};
*/
class Solution
{
    public:
    //Function to return a list of nodes visible from the top view 
    //from left to right in Binary Tree.
    vector<int> topView(Node *root)
    {
        //Your code here
        vector<int>ans;
        queue<pair<Node*,int>>q;
        map<int,int>m;
        q.push({root,0});
    
        
        while(!q.empty()){
            auto it=q.front();
            q.pop();
            int line=it.second;
            Node* n=it.first;
            if(m.find(line)==m.end()){
                m[line]=n->data;
            }
            if(n->left!=NULL){
                q.push({n->left,line-1});
            }
             if(n->right!=NULL){
                q.push({n->right,line+1});
            }
            
        }
        for(auto it:m){
            ans.push_back(it.second);
        }
        return ans;
    }

};
