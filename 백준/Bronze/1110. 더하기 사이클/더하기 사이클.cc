#include <iostream>
using namespace std;
const int MAX = 99;

int N;

int numOfCycle(void)
{
	int cnt = 0;
	int temp = N;

	while (1)
	{
		++cnt;
		int tenth_digit = temp / 10; 
		int unit = temp % 10; 
		int addResult = tenth_digit + unit;

		temp = unit * 10 + addResult % 10;
		if (temp == N)
			break;
	}
	return cnt;
}

int main(void)
{
	cin >> N;
	cout << numOfCycle() << endl;
	return 0;
}
