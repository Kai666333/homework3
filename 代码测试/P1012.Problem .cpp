#include<iostream>
using namespace std;
int main()
{
	float x,y;
	cout<<"请输入一个数字：" ;
	cin>>x ;
	if(x<1)
	{
	y=x;
	}
	else if(x>=1&&x<=10)
	{
	y=2*x-1;
	}
	else if(x>10)
	{
	y=3*x-11;
	}
	cout<<y;
	while(1)
	{
	}
	return 0;
}
