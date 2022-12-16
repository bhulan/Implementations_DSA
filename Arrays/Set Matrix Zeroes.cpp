class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
       int n=matrix.size();
       int m=matrix[0].size();
       vector<int>row;
        vector<int>col;
       for(int i=0;i<n;i++){
           for(int j=0;j<m;j++){
               if(matrix[i][j]==0){  //-------------------find zeros and push them in vectors 
                   row.push_back(i);
                    col.push_back(j);
               }
           }
       }
       int i=0;
       while(i<row.size()){
           for(int j=0;j<m;j++){    //make all rows and columns 0 belongs to this vectors 
                matrix[row[i]][j]=0;
           }
           i++;
       }
       int j=0;
         while(j<col.size()){
           for(int i=0;i<n;i++){
                matrix[i][col[j]]=0;
           }
           j++;
       }

    }
};
