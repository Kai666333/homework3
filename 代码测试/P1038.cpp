#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int n,i,a,j;
	cout<<"������һ����n:";
	cin>>n;
	cout<<endl;
	cout<<"������n���ź��������";
	int shu[1000];
	for(i=0;i<n;i++)
	cin>>shu[i];
	cout<<"��������������a";
	cin>>a;
	cout<<endl;
	if(shu[0]>a)
	{
		for(i=n-1;i>=0;i--)
		shu[i+1]=shu[i];
		shu[0]=a;
	}
	if(shu[n-1]<a) shu[n]=a;
	
	if(a>shu[0]&&a<shu[n-1])
	
	{
		for(i=0;i<n-1;i++)
		{
		if(a>shu[i]) j=i+1;}
		for(i=n-1;i>=j;i--)
		
	{	shu[i+1]=shu[i];
		
	} 
	shu[j]=a;
	}
	for(i=0;i<=n;i++)
	{cout<<shu[i]<<"";
	cout<<endl;} 

	while(1){
	}
	return 0;
	
}
