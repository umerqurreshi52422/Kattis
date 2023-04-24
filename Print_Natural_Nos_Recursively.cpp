#include<iostream>
using namespace std;

int RecNaturalNos(int n)
{
	if (n == 0)
		return n;


	RecNaturalNos(n - 1);
	cout << n << "  ";
}

int main()
{
	int x;
	cout << " Enter number to print all natural from 0  to no :";
	cin >> x;

	RecNaturalNos(x);


	return 0;

}