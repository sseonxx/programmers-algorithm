#include<iostream>
#include<cstring>
using namespace std;

int main()
{
	int n,x;
	cin >> n>>x;
	
	int arr[10005];

	for (int i = 0; i < n; i++)
		cin >> arr[i];		
	for (int j = 0; j < n; j++)
	{
		if (x > arr[j])
		{
			cout << arr[j]<<" ";
		}
	}
	
	return 0;
}