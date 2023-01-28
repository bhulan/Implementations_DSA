class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int n=matrix.size();
        int m=matrix[0].size();
        int lc=0,lr=0;
        int uc=m-1;
        int ur=n-1;
        vector<int>ans;
        while(lc<uc && lr<ur){
            for(int i=lc;i<=uc;i++){
                ans.push_back(matrix[lr][i]);
            }
            lr++;
            for(int i=lr;i<=ur;i++){
                ans.push_back(matrix[i][uc]);
            }
            uc--;
            for(int i=uc;i>=lc;i--){
                ans.push_back(matrix[ur][i]);
            }
            ur--;
            for(int i=ur;i>=lr;i--){
                ans.push_back(matrix[i][lc]);
            }
            lc++;
        }
        if(lr==ur){
            for(int i=lc;i<=uc;i++){
                ans.push_back(matrix[lr][i]);
            }
        }
        else if(lc==uc){
               for(int i=lr;i<=ur;i++){
                ans.push_back(matrix[i][uc]);
            }
        }
        return ans;
    }
};
