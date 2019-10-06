#include<iostream>
using namespace std;
int main()
{
	double a,b,c,z;
	cout<<"请输入三个数";
	cin>>a>>b>>c; 
	a>b? z=a: z=b ;
	z>c? z=z: z=c ;
	cout<<"最大的数是"<<z<<endl;
	while(1)
	{
	}
	return 0;
 } 
