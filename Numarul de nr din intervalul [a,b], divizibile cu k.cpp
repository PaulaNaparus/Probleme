#include <iostream>
using namespace std;
int main()
{
	int a, b, k, i, n = 0;
	cout << "The interval is [a,b] \n";
	cout << "Enter a number for a :\n";
	cin >> a;
	cout << "Enter a number for b:\n";
	cin >> b;
	cout << "Enter a divisor:";
	cin >> k;
	for (i = a; i <= b; i++)
	{
		if (i%k == 0)
			n++;
	}
	cout << "Number of numbers from the chosen interval divisibile by " << k << " is " << n << "\n";
	system("pause");

}