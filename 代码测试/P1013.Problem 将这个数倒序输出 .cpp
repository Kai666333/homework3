#include<iostream>
using namespace std;
int main()
{ int a,b,c,d,e;
	cout<<"请输入一个数";
	cin>>a;
	b=a/100;
	c=(a-100*b)/10;
	d=(a-100*b-10*c);
	e=(d*100+c*10+b);
	cout<<e;
	while(1)
	{
	}
	return 0;
}
