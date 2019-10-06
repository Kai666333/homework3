#include<iostream>
using namespace std;
 
void Transform(int i,int num) 
{
	for (int j = 0; j <= (num - 1) / 2 - i; j++)
	cout << " ";
 
	for (int k = 0; k < 2 * i + 1; k++)
	cout << "*";
	
	cout << endl;
}
 
 
int  main()
{
	int i = 0;
	int num = 0;
	cout << "请输入一个数";
	cin >> num;
		for (i = 0; i < (num - 1) / 2; i++)
			Transform(i, num);
		for (i = (num - 1) / 2; i >= 0; i--)
			Transform(i, num);
	
	return 0;
	} 


