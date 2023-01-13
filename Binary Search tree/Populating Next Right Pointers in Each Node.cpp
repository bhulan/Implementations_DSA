/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* left;
    Node* right;
    Node* next;

    Node() : val(0), left(NULL), right(NULL), next(NULL) {}

    Node(int _val) : val(_val), left(NULL), right(NULL), next(NULL) {}

    Node(int _val, Node* _left, Node* _right, Node* _next)
        : val(_val), left(_left), right(_right), next(_next) {}
};
*/

class Solution {
public:
    Node* connect(Node* root) {
        if(root==NULL)
        return root;
        queue<Node*>q;
        q.push(root);
        while(!q.empty()){
            int s=q.size();
            Node* pre=NULL;
            while(s--){
                Node* k=q.front();
                q.pop();
                if(k->left!=NULL)
                q.push(k->left);
                 if(k->right!=NULL)
                q.push(k->right);
                if(pre!=NULL)
                pre->next=k;
                pre=k;
            }

        }
        return root;
    }
};
