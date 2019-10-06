#include<iostream>
using namespace std;
int main()
{
	int m; int n;
	cout<<"ÇëÊäÈëm=";
	cin>>m; int a[m];
	for(int i=0;i<m;i++)
	{
		cin>>a[i];
	}
	cout<<"ÇëÊäÈën=";
	cin>>n; int b[n];
	for(int i=0;i<n;i++)
	{
		cin>>b[i];
	}
	int *R=new int[m+n];
	int u=0;
	int i=0;
	while(i<m+n+2)
	{
		R[i]=a[u];
		R[i+1]=b[u];
		u++;
		i+=2;
	}
	int temp;
	i=0;
	while(i<m+n+1)
	{
		for(int j=m+n;j>i;j--)
		{
			if(R[j]<R[j-1])
			{
				temp=R[j];
				R[j]=R[j-1];
				R[j-1]=temp;
				
			}
		}
		i++;
	}
	i=0;
	while(i<m+n+1)
	{
		cout<<R[i]<<"  ";
		i++;
	}
 } 
