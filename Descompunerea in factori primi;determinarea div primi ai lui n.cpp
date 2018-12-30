
#include <iostream>
using namespace std;
int main()
{
	int n, div = 2, power = 0;
	cout << "Enter a number: \n";
	cout << "n = "; 
	cin >> n;
	while (n != 1)
	{
		power = 0;
		while (n%div == 0)
		{
			power++;
			n = n / div;
		}
		if (power != 0)
			cout<<"The prime divisors are " << div << "^" << power << endl;
		div++;
		system("pause");
	}
	return 0;
}
