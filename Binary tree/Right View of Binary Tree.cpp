/* A binary tree node has data, pointer to left child
   and a pointer to right child 
struct Node
{
    int data;
    struct Node* left;
    struct Node* right;
    
    Node(int x){
        data = x;
        left = right = NULL;
    }
}; */

// Should return  right view of tree
class Solution
{
    public:
    //Function to return list containing elements of right view of binary tree.
    void right(Node *root,vector<int>&ans,int l){
        if(root==NULL)
        return;
        if(l==ans.size())
        ans.push_back(root->data);
        right(root->right,ans,l+1);
        right(root->left,ans,l+1);
    }
    vector<int> rightView(Node *root)
    {
       // Your Code here
       vector<int>ans;
       right(root,ans,0);
       return ans;
       
    }
};
