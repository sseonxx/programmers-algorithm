#include<iostream>
#include<cstring>

using namespace std;

int main()
{
	int a, b, c;
	cin >> a;
	cin >> b;
	cin >> c;

	if (a > b)
	{
		if (a > c)
		{
			if (b > c)
			{
				cout << b;
			}
			else
				cout << c;
		}
		else
		{
			cout << a;
		}
	}
	else
	{
		if (b > c)
		{
			if (a > c)
			{
				cout << a;
			}
			else
				cout << c;
		}
		else
		{
			cout << b;
		}
	}


}