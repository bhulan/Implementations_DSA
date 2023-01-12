
class Solution {
  public:
    // Function to convert a binary tree into its mirror tree.
    void mirror(Node* root) {
        // code here
        if(root==NULL)
        return;
        swap(root->left,root->right);
        mirror(root->left);
        mirror(root->right);
        
    }
};
