#include<iostream>
using namespace std;
int main()
{
	long long a,n,sum=0;
	cin>>a>>n;
	for (int i=1;i<=n;i++)
	{
		long long t=0;
		for(int j=1;j<=i;j++)
		{
			t=t*10+a;
		}
			sum=sum+t;
	}
	cout<<sum;
	while(1){
		
	}
	return 0;
}
