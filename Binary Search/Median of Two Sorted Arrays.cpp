class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
       vector<int>arr;
        double ans;
        int j=0;
        for(int i=0;i<nums1.size();i++){
            arr.push_back(nums1[i]);
        }
         for(int i=0;i<nums2.size();i++){
             arr.push_back(nums2[i]);
        }
        int n=arr.size();
        int l=n/2;
        sort(arr.begin(),arr.end());
        if(n%2!=0){
            ans=arr[l];
        }
        else{
          double  sum=(arr[l-1]+arr[l]);
            ans=sum/2;
        }
        return ans;
       
    }
};
