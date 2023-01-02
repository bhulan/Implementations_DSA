class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        int n=heights.size();
        int left[n];
        int right[n];
        left[0]=-1;
        right[n-1]=n;
        int area=0;
        for(int i=1;i<n;i++){
            int prev=i-1;
            while(prev>=0 && heights[prev]>=heights[i])
            {
                prev=left[prev];
            }
            left[i]=prev;
        }
         for(int i=n-2;i>=0;i--){
            int next=i+1;
            while(next<n && heights[next]>=heights[i])
            {
                next=right[next];
            }
            right[i]=next;
        }
        for(int i=0;i<n;i++){
            int width=right[i]-left[i]-1;
            int currarea=width*heights[i];
            area=max(area,currarea);

        }
        return area;
    }
};
