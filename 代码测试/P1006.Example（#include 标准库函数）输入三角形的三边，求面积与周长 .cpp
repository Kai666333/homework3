#include<iostream>
using namespace std;
#include <cmath>
int main()
{
	float a,b,c,s,l,d;
	cout<<"请输入三角形的三边长";
	cin>>a>>b>>c;
	l=(a+b+c);
	d=(l/2);
	s=sqrt(d*(d-a)*(d-b)*(d-c));
	 cout<<"三角形的面积为"<<s<<endl;
	 cout<<"三角形的周长为"<<l<<endl;;
	while(1)  
	{
	}
	return 0;
	
}
