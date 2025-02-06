#include<iostream>
#include<cstring>
using namespace std;
//문제번호:9498번
int main()
{
	int a;

	cin >> a;


	if (a >= 90)
		cout << "A";
	else if (a >= 80)
		cout << "B";
	else if (a >= 70)
		cout << "C";
	else if (a >= 60)
		cout << "D";
	else
		cout << "F";

	return 0;

}