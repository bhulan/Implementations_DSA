    Node *marge(Node *a, Node *b){
        if(a==NULL)
        return b;
        if(b==NULL)
        return a;
        Node *temp;
        if(a->data<b->data){
            temp=a;
            temp->bottom=marge(a->bottom,b);
        }
        else{
            temp=b;
            temp->bottom=marge(a,b->bottom);
        }
        temp->next=NULL;
        return temp;
    }
    
Node *flatten(Node *root)
{
   // Your code here
   if(root== NULL || root->next==NULL)
   return root;
   
   return marge(root,flatten(root->next));
}
