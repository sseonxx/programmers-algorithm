#include<iostream>
using namespace std;

int main()
{
	double arr[1000];
	int num;
	double sum = 0;
	double max = 0;

	cin >> num;

	for (int i = 0; i < num; i++)
	{
		cin >> arr[i];
		
		if (arr[i] > max)
			max = arr[i];
	}
	for (int i = 0; i < num; i++)
	{
			sum += ((arr[i] / max) * 100);
	}
	cout << sum / num << '\n';
}