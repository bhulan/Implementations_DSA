class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int col=matrix.size();
        int row=matrix[0].size();
        int h=(col*row)-1;
        int l=0;
        while(l<=h){
            int mid=(l+h)/2;
            if(matrix[mid/row][mid%row]==target)
            {
                return true;
                break;
            }
            else if(matrix[mid/row][mid%row]<target)
                 {
                     l=mid+1;
                 }
                 else
                 h=mid-1;
        }
        return false;
    }
};
