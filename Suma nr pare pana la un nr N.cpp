#include <iostream>
using namespace std;
int main()
{
	int N, s, i;
	s = 0;
	std::cout << "Enter a number:\n";
	std::cout << "N=";
	std::cin >> N;
	for (i = 1; i < N; i++)
	{
		if (i % 2 == 0)
			s = s + i;
	}
	std::cout << "The sum of the even numbers is:" << s<< "\n";
	system("pause");

}