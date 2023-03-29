#include<bits/stdc++.h>
using namespace std;
 int main()
{
 int n;
 cout<<"how many stars you want to print";
 cin>>n;
 int lim=n/2;
 
 for(int i=1;i<=lim;i++)
 {
  for(int j=1;j<=(lim+1)-i;j++)
  {
   cout<<"*";
  }
  for(int k=1;k<i;k++)
  {
   cout<<"  ";
  }
  for(int j=1;j<=(lim+1)-i;j++)
  {
   cout<<"*";
  }
  cout<<"\n";
 }
  for(int i=2;i<=lim;i++)
 {
  for(int j=1;j<=i;j++)
     cout<<"*";
  for(int k=1;k<=lim-i;k++)
  {
   cout<<"  ";
  }
  for(int j=1;j<=i;j++)
  {
  cout<<"*";
  }
  cout<<"\n";
 }
 
}
