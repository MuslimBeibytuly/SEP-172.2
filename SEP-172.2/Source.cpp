#include <string>
#include <iostream>

using namespace std;

class Human 
{
public:
	//state
	int age;
	string name;

	//operations
	void hello() {
		cout << "Hello, I am: " << name << endl;
	}
};

int main() {
	Human h1, h2;
	h1.name = "LOL";
	h2.name = "QWERTY";
	h1.hello();
	h2.hello();
	system("pause");
	return 0;
}
