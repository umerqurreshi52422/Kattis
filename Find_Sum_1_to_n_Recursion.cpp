#include<iostream>
using namespace std;

int RecursiveSum(int n)
{
	if (n == 0)
		return n;

	return RecursiveSum(n - 1) + n;
}

int main()
{
	int x;
	cout << " \n Enter number n to find sum from 1 to n : ";
	cin >> x;

	cout<<"\n Sum using Recursion is : "<<RecursiveSum(x);

	return 0;
}