#include <iostream>
using namespace std;
int main()
{
	int a = 0, b = 1, max, n;
	cout << "Enter a number: ";
	cout << "n = ";
	cin >> n;
	while (a + b <= n)
	{
		max = a + b;
		a = b;
		b = max;
	}
	cout << "The highest Fibonacci number <= to " << n << " is ";
	cout << max;
	system("pause");

}