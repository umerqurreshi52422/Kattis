#include<iostream>
#include<string>
using namespace std;


int main()
{
	int N;
	string a = "Abracadabra";
	cin >> N;

	for (int i = 1; i <= N; i++)
	{
		cout << i << " " << a<<endl;
	}

	return 0;
}