#include<iostream>
#include<cstring>
using namespace std;

int main()
{
	int num1, num2;
	while (1)
	{
		int sum = 0;
		cin >> num1 >> num2;
		sum += (num1 + num2);
		if (sum == 0)
		{
			break;
		}
		cout << sum << endl;

		

	}
}