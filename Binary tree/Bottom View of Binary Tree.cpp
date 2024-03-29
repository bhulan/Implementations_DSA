//Function to return a list containing the bottom view of the given tree.

class Solution {
  public:
    vector <int> bottomView(Node *root) {
        // Your Code Here
        vector<int> ans;
        map<int, int> mp;
        if(root==NULL)
        return ans;
        queue<pair<Node*, int>> q;
        q.push({root, 0});
        while(q.empty() == false){
            auto curr = q.front();
            q.pop();
            Node* node=curr.first;
            int line=curr.second;
            mp[line] = curr.first->data;
            if(node->left != NULL){
                q.push({curr.first->left, line - 1});
            }
            if(node->right != NULL){
                q.push({curr.first->right,line+ 1});
            }
        }
        for(auto it : mp){
            ans.push_back(it.second);
        }
        return ans;
    }
};
