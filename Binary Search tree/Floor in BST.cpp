
// Function to search a node in BST.
vector<int>ans;
int res=0;
int floor(Node* root, int x) {
    // Code here
    if(root==NULL)
    return NULL;
    floor(root->left,x);
    ans.push_back(root->data);
    floor(root->right,x);
    if(ans[0]>x)
    return -1;
    for(int i=0;i<ans.size();i++){
        if(ans[i]==x){
        res= ans[i];
        break;
        }
        if(ans[i]>x){
        res= ans[i-1];
        break;
        }
        
    }
    return res;
}
