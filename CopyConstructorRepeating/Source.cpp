#include <iostream>
#include <vector>
#include "Matrix.h"
using namespace std;

int main() {
	vector<int> a;
	a.push_back(1);
	a.push_back(2);
	for (int i = 0; i < a.size(); ++i) {
		cout << a[i] << ' ';
	}
	system("pause");
	return 0;
}