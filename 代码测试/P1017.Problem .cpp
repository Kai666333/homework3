#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int y,m;
	cout<<"请输入年，月";
	cin>>y>>m;
	switch(m)
	{
		case 1:
		case 3:
		case 5:
		case 7:
		case 8:
		case 10:
		case 12:
			cout<<"本月31天";
			break;
		case 4:		
		case 6:
		case 9:
		case 11:	
			cout<<"本月30天";
			break;
		case 2:
		{
			if(y%4==0&&y%100!=0||y%400==0)
			{
			cout<<"本月有29天"; 
			}	
			else
			{
				cout<<"本月有28天";
			}
		}		
	}
	while(1){
			}
	return 0;	
}
