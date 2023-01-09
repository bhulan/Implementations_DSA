/*  Structure of a Binary Tree

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

class Solution {
  public:
    // Function to get the maximum width of a binary tree.
    int getMaxWidth(Node* root) {
 

        // Your code here

        queue <Node*> q;

        vector <int> v;

        if(root==NULL)

        return 0;

        int res=0;

        q.push(root);

        while(!q.empty())

        {

            int count = q.size();

            res=max(res,count);

            for(int i=0;i<count;i++)

            {

                Node* curr=q.front();

                q.pop();

                v.push_back(curr->data);

                if(curr->left)q.push(curr->left);

                if(curr->right)q.push(curr->right);

            }

        }

        return res;
        // Your code here
        
    }
};
