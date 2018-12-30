

#include <iostream>
using namespace std;
int ok = 0, s[50], n, aux;
	int main()
{
	cout << "String dimension is: n= ";
	cin >> n;
	for (int i = 0; i < n; i++) {
		cout << "sir[" << i << "] = ; ";
		cin >> s[i];
	}
	while (ok == 0) {
		ok = 1;
		for (int i = 0; i < n - 1; i++) {
			if (s[i] > s[i + 1])
			{
				aux = s[i];
				s[i] = s[i + 1];
				s[i + 1] = aux;
				ok = 0;
			}
		}

	}
	cout << "The ordered string is : ";
	for (int i = 0; i < n; i++)
	cout << s[i] << " ";
	system("pause");

}