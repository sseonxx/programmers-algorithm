#include<iostream>
#include<cstring>
using namespace std;
//문제:8393

int main()
{
	int num,sum=0;
	cin >> num;

	for (int i = 1; i <= num; i++)
	{
		sum += i;
	}
	cout << sum << endl;
}