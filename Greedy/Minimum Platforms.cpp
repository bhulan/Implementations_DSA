class Solution{
    public:
    //Function to find the minimum number of platforms required at the
    //railway station such that no train waits.
    int findPlatform(int arr[], int dep[], int n)
    {
    	// Your code here
    	sort(arr,arr+n);
    	sort(dep,dep+n);
    	int ans=0,plat=0;
    	int i=0,j=0;
    	while(i<n && j<n){
    	    if(arr[i]<=dep[j]){
    	        ans++;
    	        i++;
    	    }
    	    else{
    	        ans--;
    	        j++;
    	    }
    	   	plat=max(plat,ans);
    	}
    return plat;
    }
};
