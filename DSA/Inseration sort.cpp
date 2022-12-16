#include<iostream>
using namespace std;
int main(){
	int arr[5]={1,5,3,7,2};
	for(int i=1;i<5;i++){
		int j=i-1;
		int k=arr[i];
		while(j>=0 && arr[j]>k){
			swap(arr[j],arr[j+1]);
			j--;
		}
		arr[j+1]=k;
	}
	
	
	
	
	for(int i=0;i<5;i++){
		cout<<arr[i]<<" ";
	}
}


