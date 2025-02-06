#include<iostream>
#include<cstring>
using namespace std;

int main()
{	
	//입출력 속도 높히기
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	int num,a,b;
	cin >> num;

	for (int i = 1; i <= num; i++)
	{
		cin >> a >> b;
		cout << a+b << '\n';
	}
	return 0;

}