#include <algorithm> // for std::swap
#include<iostream>
using namespace std;

int countInversions(int arr[], int n) {
    // Initialize a counter to keep track of the number of inversions
    int count = 0;

    // Iterate through the array and count the number of inversions
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] > arr[j]) {
                count++;
            }
        }
    }

    // Return the number of inversions
    return count;
}

int main()
{
	const int n =8;
	int arr[n] = {2,1,3,5,4,7,6,0};

	cout << " no of Inversions : " << countInversions(arr, n)<<endl;

	system("pause");
	return 0;
}