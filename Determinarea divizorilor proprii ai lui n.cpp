#include <iostream>
using namespace std;
int main()
{
	int d, n;
	std::cout << "Enter a number:\n";
	std::cout << "n = ";
	std::cin >> n;
	std::cout << " The own divisors for " << n << " are:";
	for (d = 2; d <= n / 2; d++) 

		if (n%d == 0)
		
			cout << d << " ";
			//system("pause");
		

	
}