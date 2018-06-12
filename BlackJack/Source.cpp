#include "Table.h"
int main()
{
	Table::getInstance().init();
	Table::getInstance().play();
	system("pause");
	return 0;
}
