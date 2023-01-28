class Solution {
public:
    int search(vector<int>& nums, int target) {
        int l=0,u=nums.size()-1;
        while(l<=u){
            int mid=(l+u)/2;
            if(nums[mid]==target)
                return mid;
            else if(nums[mid]>target)
                u=mid-1;
            else
                l=mid+1;
        }
        return -1;
    }
};
