#include<iostream>
using namespace std;

int SortingZerosAndOnes(int arr[], int n)
{
	int temp = 0;

	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (arr[i] < arr[j])
			{
				temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}

	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << ", ";
	}

	for (int i = 0; i < n; i++)
	{
		if (arr[i + 1] == 0)
			return i;
	}

	return 0;
	
}


int main()
{
	int arr[15] = { 1,0,0,1,0,0,0,1,1,0,1,1,1,1,1 };

	cout<<"\n The last 1 is at index " <<SortingZerosAndOnes(arr, 15)+1<<endl;

	
	system("pause");
	return 0;
}