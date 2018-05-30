#include "shared_pointer.h"
#include <memory>
void main() 
{
	std::shared_ptr<int> a(new int(5));
}