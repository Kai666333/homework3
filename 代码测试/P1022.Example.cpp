#include<iostream>
using namespace std;
int main()
{
	int n,a;
	cout<<"请输入一个数";
	cin>>n;
	for(a=-3;a<=n;a++)
	{
		for(int j=1;j<=n;j++)
		{
			cout<<"*";
		}
		cout<<endl;
		n=n-1;
	}
	while(1)
	{
	}
	return 0;
 } 
