#include<iostream>
using namespace std;
int main(){
	int k=0;
	int arr[5]={1,3,5,6,8};
	for(int i=0;i<5;i++){
		if(arr[i]==5){
		cout<<"present"<<endl;
		k=1;
		break;
	}
}
  if(k==0)
	cout<<"The key is not present"<<endl;
	}
