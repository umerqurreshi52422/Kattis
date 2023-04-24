/* A program to find day of a given date */
#include <bits/stdc++.h>
#include<iostream>
using namespace std;

int dayofweek(int d, int m)
{
	int y = 2009;
	static int t[] = { 0, 3, 2, 5, 0, 3,
					5, 1, 4, 6, 2, 4 };
	y -= m < 3;
	return (y + y / 4 - y / 100 +
		y / 400 + t[m - 1] + d) % 7;
}

// Driver Code
int main()
{
	int x, y;
	cin >> x >> y;
	int day = dayofweek(x, y);
	string arr[7] = { "Monday","Tuesday","Wednesday","Thursday","Friday","Saturday","Sunday" };
	day = (day + 6) % 7;
	cout << arr[day]<<endl;

	system("pause");
	return 0;
}
