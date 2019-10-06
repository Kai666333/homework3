#include<iostream>
using namespace std;
int main()
{
	float a=2,b=1,n,x,y,z,sum=2/1,i=1;
	cin>>n;
	while(i<n)
	{
		x=a;
		y=b;
		b=x;
		a=x+y;
		z=a/b;
		sum=sum+z;
		i++;
	}
 	cout<<sum;
	 while(1)
 	{
	 }
	 return 0;
 } 
