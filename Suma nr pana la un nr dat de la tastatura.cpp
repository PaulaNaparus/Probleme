
#include <iostream>
using namespace std;
int main()
{
	int n, s = 0, i;
	std::cout << "Enter a number:\n";
	std::cout << "n=";
	std::cin >> n;
	for (i = 1; i <= n; i++)
	{
		s = s + i;
	}

	cout << "The sum of the numbers is :";
	cout << s<<"\n";
	//system("pause");
	

}