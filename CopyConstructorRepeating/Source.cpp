#include <iostream>
#include "Matrix.h"
using namespace std;

int main() {
	int n = 5;
	int *a = new int[n];
	for (int i = 0; i < n; ++i) {
		a[i] = i;
		cout << a[i] << endl;
	}
	int *temp = new int[n + 1];
	for (int i = 0; i < n; ++i) {
		temp[i] = a[i];
	}
	temp[n] = 5;
	delete[] a;
	a = new int[n + 1];
	for (int i = 0; i < n + 1; ++i) {
		a[i] = temp[i];
	}

	system("pause");
	return 0;
}