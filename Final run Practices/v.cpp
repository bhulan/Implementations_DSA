class Solution {
public:
    int kthSmallest(vector<vector<int>>& matrix, int k) {
      priority_queue<int,vector<int>,greater<int>>minheap;
      for(int i=0;i<matrix.size();i++){
         for(int j=0;j<matrix[0].size();j++){
          minheap.push(matrix[i][j]);
      }   
      }  
      while(k>1){
          minheap.pop();
          k--;
      }
      return minheap.top();
    }
};
