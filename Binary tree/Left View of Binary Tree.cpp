

/* A binary tree node

struct Node
{
    int data;
    struct Node* left;
    struct Node* right;
    
    Node(int x){
        data = x;
        left = right = NULL;
    }
};
 */

//Function to return a list containing elements of left view of the binary tree.
void left(Node *root,vector<int>&ans,int level){
    if(root==NULL)
    return;
    if(ans.size()==level)
    ans.push_back(root->data);
   left(root->left,ans,level+1);
   left(root->right,ans,level+1);
}
vector<int> leftView(Node *root)
{
   // Your code here
   vector<int>ans;
   left(root,ans,0);
   return ans;
}
