// https//open.kattis.com/problems/bijele

#include<iostream>
using namespace std;


int main()
{
	int arr[6] = { 1,1,2,2,2,8 };
	int input[6] = { 0 };
	int ans[6] = {0};

	for (int i = 0; i < 6; i++)
	{
		cin >> input[i];

		if (arr[i] == input[i])
			continue;
		else
		{
			if (input[i]<arr[i] ||input[i]>arr[i])
			{
				ans[i] = arr[i] - input[i];
			}
			
		}
	}

	for (int i = 0; i < 6; i++)
	{
		cout << ans[i] << " ";
	}

	return 0;
}