#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int year;
	cout<<"请输入一个年份"<<endl;
	cin>>year;
	if (year%4==0&&year%100!=0||year%400==0)
		cout<<"Yes";
		else
		cout<<"No";
		while(1)
		{
		}
		return 0;
 } 
