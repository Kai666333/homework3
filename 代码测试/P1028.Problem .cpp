#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int p,q,r,i;
	cout<<"水仙花数有：\n";
	for(i=100;i<=999;i++)
	{
		p=i/100;
		q=(i-p*100)/10;
		r=i%10;
		if(i==p*p*p+q*q*q+r*r*r)
		cout<<i<<endl;
	 } 
	while(1){
	}
	return 0;
}

