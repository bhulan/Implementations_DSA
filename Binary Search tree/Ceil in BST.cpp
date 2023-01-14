// Function to return the ceil of given number in BST.
vector<int>ans;
int findCeil(Node* root, int input) {
    if (root == NULL) 
    return -1;
    findCeil(root->left,input);
    ans.push_back(root->data);
    findCeil(root->right,input);
    for(int i=0;i<ans.size();i++){
        if(ans[i]>=input)
        return ans[i];
    }
    return -1;

    // Your code here
}
