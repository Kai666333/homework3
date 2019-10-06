#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int a[3][5]={   {1,2,3,4,5},{2,3,4,5,6},{3,4,5,6,7}  };
	int i,j;
	int sum1=0,sum2=0,sum3=0,sum4=0,sum5=0;
	for(i=0;i<3;i++)
	sum1=sum1+a[i][0];
	for(i=0;i<3;i++)
	sum2=sum2+a[i][1];
	for(i=0;i<3;i++)
	sum3=sum3+a[i][2];
		for(i=0;i<3;i++)
	sum4=sum4+a[i][3];
		for(i=0;i<3;i++)
	sum5=sum5+a[i][4];
	cout<<sum1<<" "<<sum2<<" "<<sum3<<" "<<sum4<<" "<<sum5<<endl;
	while(1){
	}
	return 0;
}
