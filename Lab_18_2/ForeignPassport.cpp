#include "ForeignPassport.h"



ForeignPassport::ForeignPassport()
{
	foreignDocId = 1;
}


ForeignPassport::~ForeignPassport()
{
}

void ForeignPassport::print()
{
	std::cout <<
		name << ' ' <<
		docId << ' ' <<
		timestamp << ' ' << 
		foreignDocId << std::endl;
}
