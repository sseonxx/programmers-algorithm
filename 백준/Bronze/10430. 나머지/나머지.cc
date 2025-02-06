#include<iostream>
#include<cstring>
using namespace std;
//문제번호:10430
int main()
{
	int a, b, c;
	cin >> a;
	cin >> b;
	cin >> c;

	cout << (a + b) % c << endl;
	cout << ((a % c) + (b % c)) % c << endl;
	cout << (a * b) % c << endl;
	cout << ((a % c) * (b % c)) % c << endl;

}