#include<iostream>
#include<cstring>
using namespace std;


int main()
{
	int a[10];
	int b;
	int al = 0;

	for (int i = 0; i < 8; i++)
	{
		cin >> a[i];
	}
	if (a[0] == 1 && a[1] == 2 && a[2] == 3 && a[3] == 4 && a[5] == 6 && a[7] == 8)
	{
		cout << "ascending" << "\n";

	}
	else if (a[0] == 8 && a[1] == 7 && a[2] == 6 && a[3] == 5 && a[4] == 4 && a[5] == 3 && a[6] == 2 && a[7] == 1)
	{
		cout << "descending" << "\n";

	}
	else
		cout << "mixed";
}