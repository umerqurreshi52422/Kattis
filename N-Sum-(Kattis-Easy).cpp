//https//open.kattis.com/problems/nsum

#include<iostream>
using namespace std;



int main()
{
	int n,sum=0,x;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> x;
		sum += x;
	}

	cout << sum << endl;

	return 0;
}
