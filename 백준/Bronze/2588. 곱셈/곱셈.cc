#include<iostream>
#include<cstring>
using namespace std;
//문제번호:2588번
int main()
{
	int a, b;

	cin >> a;
	cin >> b;

	cout << a*((b)%10) << endl;
	cout << a*((b / 10) % 10) << endl;
	cout << a * (b / 100) << endl;
	cout << a * b << endl;
	
}