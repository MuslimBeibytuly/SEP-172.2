#include "Vector.h"
#include <iostream>
#include <string>
using namespace std;

class POS 
{
	static string statusUserEntered, statusProductChosen, statusMoneyEntered, statusOrderVerified;
	string state;
	void toUserEntered() {
		if (true) {
			state = statusUserEntered;
		}
	}
	void toProductChosen() {
		if (true) {
			state = statusProductChosen;
		}
	}
};

string POS::statusUserEntered = "user_entered",
POS::statusProductChosen = "product_chosen",
POS::statusMoneyEntered = "money_entered",
POS::statusOrderVerified = "order_verified";

int main() {

	system("pause");
	return 0;
}