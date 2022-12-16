#include <bits/stdc++.h> 
#include <bits/stdc++.h> 

pair<int,int> missingAndRepeating(vector<int> &arr, int n)
{
	// Write your code here 
    int a=0,b=0,sum=0;
    sort(arr.begin(),arr.end());
    for(int i=0;i<arr.size()-1;i++){
          if(arr[i]==arr[i+1])
              a=arr[i];
    }
    for(int i=0;i<arr.size();i++){
        sum+=arr[i];
    }
    //n=n-1;
   sum=sum-a;
    int tot=(n*(n+1))/2;
    b=tot-sum;
    return {b,a};
	
}
