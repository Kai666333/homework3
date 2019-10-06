#include<iostream>
using namespace std;
int main()
{
	int i,n,x,y;
	cout<<"ÇëÊäÈëÊý×Ön=";
	cin>>n;
	int a[n];
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	for(i=n;i>=0;i--)
	{
		cout<<a[i]<<"   ";
	}
}
