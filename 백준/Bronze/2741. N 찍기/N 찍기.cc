#include<iostream>
#include<cstring>
using namespace std;

int main()
{

	//입출력 속도 높히기
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	int num;
	cin >> num;

	for (int i = 1; i <= num; i++)
	{
		cout << i << '\n';
	}

	return 0;

}