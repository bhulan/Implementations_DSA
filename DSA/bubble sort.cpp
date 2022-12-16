#include<iostream>
using namespace std;
int main(){
	int arr[5]={1,5,3,7,2};
	int c=1;
	while(c<5){
		for(int i=0;i<5-c;i++){
			if(arr[i]>arr[i+1]){
				swap(arr[i],arr[i+1]);
			}
		}
		c++;
	}
	for(int i=0;i<5;i++){
		cout<<arr[i]<<" ";
	}
}


