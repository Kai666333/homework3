#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int a,b,c,d; 
	cout<<"ÇëÊäÈëa*x*x+b*x+c=0µÄa,b,c\n";
	cin>>a>>b>>c;
	d=(b*b-4*a*c);
	if (d>=0)
{
	int x1,x2;
	x1=((-b+sqrt(d))/(2*a));
	x2=((-b-sqrt(d))/(2*a));
	cout<<"x1="<<x1<<"\n" ;
	cout<<"x2="<<x2<<"\n";
	
}
	else
	cout<<"No solution";
	while(1)
	{
	}
	return 0;
} 
