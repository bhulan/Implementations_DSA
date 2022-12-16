#include<iostream>
using namespace std;
int main(){
	int key=5;
	int k=0;
	int arr[5]={1,3,5,6,8};
  int l=0,h=5-1;
  while(l<h){
  	int mid=(l+h)/2;
  	if(arr[mid]==key){
  		cout<<"present"<<endl;
  		k=1;
  		break;
	  }
	  else if(arr[mid]>key){
	  	h=mid-1;
	  }
	  else
	  l=mid+1;
  }
  if(k==0)
	cout<<"The key is not present"<<endl;
	}
