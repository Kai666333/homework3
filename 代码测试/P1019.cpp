#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int m,i=2,a,c=0;
	cout<<"ÇëÊäÈëm:";
	cin>>m;
	a=(m-1);
	for(i=2;i<=a;i++) 
	{
		if(m%i==0)
		{
		c=c+1;
		}
		else
		{
		c=c;
		}
	}
	if(c==0)
	cout<<"Yes";
	else 
	cout<<"NO";
	while(1)
	{
	}
	return 0;
}
