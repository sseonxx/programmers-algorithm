#include<iostream>
#include<cstring>

using namespace std;

int main()
{
	int a,b;
	cin >> a;

	for (b = 1; b <= 9; b++)
	{
		cout << a << " * " << b << " = " << a * b<<endl;
	}

	return 0;
}