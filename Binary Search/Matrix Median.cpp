#include<bits/stdc++.h>

int getMedian(vector<vector<int>> &matrix)
{
    vector<int>ans;
    int s=matrix.size();
   int k=matrix[0].size();
    int y=s*k;
    for(int i=0;i<matrix.size();i++){
        for(int j=0;j<matrix[0].size();j++){
            ans.push_back(matrix[i][j]);
        }
    }
    sort(ans.begin(),ans.end());
    return ans[y/2];
    
    
}
