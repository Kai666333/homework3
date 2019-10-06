#include<iostream>
using namespace std;
int main()
{
	int a[10]={0};
	int sum=1;
	int i;
	for(i=0;i<10;i++)
	cin>>a[i];
	int d;
	cout<<"ÇëÊäÈëÌÕÌÕ¸ß¶Èd=£º";
	cin>>d;
	for(int i=0;i<10;i++)
	if((30+d)>a[i])
	{
		sum=sum+1;
	 } 
	else
	continue;
	
	cout<<sum;
	while(1){
	}
	return 0;
}
