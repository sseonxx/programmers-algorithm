#include<iostream>
#include<cstring>
using namespace std;

int factorial(int n)
{
	int sum = 1;

	for (int i = 1; i <= n; i++)
	{
		sum *= i;
	}
	return sum;
	
}


int main()
{
	int a;
	cin >> a;
	cout<<factorial(a)<<endl;

	return 0;
}