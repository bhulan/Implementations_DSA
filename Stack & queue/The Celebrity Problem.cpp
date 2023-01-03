class Solution 
{
    public:
    //Function to find if there is a celebrity in the party or not.
    int celebrity(vector<vector<int> >& M, int n) 
    {
        // code here 
        int c=0;
        for(int i=0;i<M.size();i++){
            if(M[c][i]==1)
            c=i;
        }
        for(int i=0;i<M.size();i++){
            if(i!=c && (M[c][i]==1 || M[i][c]==0))
            return -1;
        }
        return c;
    }
};
