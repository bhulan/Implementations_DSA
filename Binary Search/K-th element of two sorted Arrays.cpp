class Solution{
    public:
    int kthElement(int arr1[], int arr2[], int n, int m, int k)
    {
        int i;
      vector<int>v;
      for(i=0;i<n;i++){
         v.push_back(arr1[i]);
      }
      for(i=0;i<m;i++){
          v.push_back(arr2[i]);
      }
      sort(v.begin(),v.end());
      return v[k-1];
    }
};
