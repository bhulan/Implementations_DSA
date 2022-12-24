  class Solution{
	public:
	

	int NthRoot(int n, int m)
	{
	    // Code here.
	    int s=1;
	    int e=m;
	    int mid=0;
	    while(s<=e){
	         mid=(s+e)/2;
	        double mul=pow(mid,n);
	        if(mul==m)
	        return mid;
	         if(mul<m){
	            s=mid+1;
	        }
	        else
	        e=mid-1;
	    }
	    return -1;
	}  
};
