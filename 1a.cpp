#include<iostream>
using namespace std;
int main()
{
int a=0,b=1,n=10,c;
int i;
cout<<a<<endl;
cout<<b<<endl;
for(i=0;i<n;i++)
  {
  c=a+b;
  cout<<c<<endl;
  
  
  a=b;
  b=c;
 
 }


}
