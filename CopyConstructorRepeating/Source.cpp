#include <iostream>
#include "Matrix.h"

using namespace std;

int main() {
	Matrix first(3, 3);
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			first.a[i][j] = i + j;
			cout << first.a[i][j] << ' ';
		}
		cout << endl;
	}
	Matrix second(first);

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			cout << second.a[i][j] << ' ';
		}
		cout << endl;
	}

	system("pause");
	return 0;
}