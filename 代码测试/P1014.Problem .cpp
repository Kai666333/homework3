#include<iostream>
using namespace std;
int main()
{
	float x,y,a,b,c;
	cout<<"请输入用电量x=";
	cin>>x;
	if(x<50)
	{
	y=0.5*x;
	}
	else if(x>=50&&x<=100)
	{
	a=x-50;
	y=(50*0.5+a*0.7);
	}
	else if(x>100)
	{
	b=x-100;
	y=(50*0.5+50*0.7+b*1);
	}
	cout<<"电费总价为："<<y<<"元";
	while(1)
	{
	}
	return 0;
}
