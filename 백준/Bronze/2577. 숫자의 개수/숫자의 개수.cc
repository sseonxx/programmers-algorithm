#include<iostream>
#include<cstring>
using namespace std;
//세개의 자연수를 곱한뒤 0부터 9까지 각각의 숫자가 몇번 쓰였는지
int main()
{
	
	int num, num2, num3;
	
	int arr[10] = { 0 };

	cin >> num >> num2 >> num3;
	int result = (num * num2 * num3);

	while (result != 0)
	{
		arr[result % 10] += 1;
		result /= 10;
	}
	for (int i = 0; i < 10; i++)
	{

		cout << arr[i] << endl;
	}
	return 0;


}
