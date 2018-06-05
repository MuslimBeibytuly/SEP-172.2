#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
//void update(int & i) {
//	i += 2;
//}
//bool ifWeNeed(int & i) {
//	if (i > 5) {
//		return true;
//	}
//	return false;
//}
//void sample() {
//	vector<int> a = { 1, 2, 4, 6, 89, 2, 2, 5, 1, 5, 5, 7 };
//	sort(a.begin(), a.end());
//	for (auto i : a)
//	{
//		cout << i << ' ';
//	}
//	cout << endl;
//	for_each(a.begin(), a.end(), update);
//	for (auto i : a)
//	{
//		cout << i << ' ';
//	}
//	cout << endl;
//	auto x = count(a.begin(), a.end(), 7);
//	cout << x;
//	cout << endl;
//	vector<int> y;
//	copy(a.begin(), a.end(), &y);
//	for (auto i : y)
//	{
//		cout << i << ' ';
//	}
//	cout << endl;
//}

class Bus
{
public:
	int x, y;
	Bus(const int & x, const int & y) : x(x), y(y) {}
};
class Comparer
{
	int x, y;
public:
	Comparer(const int & x, const int & y) : x(x), y(y) {}

	bool operator () (Bus & a, Bus & b) {
		int r1 = a.x * a.x + a.y * a.y;
		int r2 = b.x * b.x + b.y * b.y;
		int r = x * x + y * y;
		if (r1 < r2) {
			return true;
		}
		else {
			return false;
		}
	}
};
void main()
{
	vector<Bus> a;
	a.push_back(Bus(1, 2));
	a.push_back(Bus(1, 5));
	a.push_back(Bus(4, 2));
	a.push_back(Bus(3, 3));
	a.push_back(Bus(3, 2));
	int x = 3, y = 3;
	sort(a.begin(), a.end(), [x, y](Bus & a, Bus & b) {
		int r1 = a.x * a.x + a.y * a.y;
		int r2 = b.x * b.x + b.y * b.y;
		int r = x * x + y * y;
		if (r1 < r2) {
			return true;
		}
		else {
			return false;
		}
	});
	for (auto i : a)
	{
		cout << i.x << ' ' << i.y << endl;
	}
	cin.get();
}
