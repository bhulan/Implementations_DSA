#include<bits/stdc++.h>
using namespace std;
int prac(int ar[],int n,int k){
int low=0,high=n,o=0;
while(low<n){
	int mid=(low+high)/2;
	if(ar[mid]==k){
		cout<<mid;
		k=1;
		break;
	}
	else if(ar[mid]<k){
		low=mid+1;
		
		
	}
	else
	high=mid-1;
}
if(o==0)
cout<<"not perggu";
	
	
}

int main(){
	int ar[10]={1,3,7,45,32,65,63,1,7,76};
	prac(ar,10,650);
	
}
