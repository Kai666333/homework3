#include<iostream>
using namespace std;
int main()
{
	int i,j,n,sum;
	cout<<"ÇëÊäÈën"<<endl;
	cin>>n;
	for(i=1;i<=n;i++)
	{
		int p=1;
		for(j=1;j<=i;j++)
		{
			p=p*j;
		}
	sum=sum+p;
	}
	cout<<sum;
	while(1)
	{
	}
	return 0;
}


