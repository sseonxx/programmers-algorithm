#include<iostream>
#include<cstring>

using namespace std;

int main()
{

	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	int num;
	cin >> num;

	for (int i = num; i>=1; i--)
	{
		cout << i << '\n';
	}

	return 0;

}