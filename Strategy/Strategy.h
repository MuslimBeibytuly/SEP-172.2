#pragma once
class Strategy
{
public:
	virtual ~Strategy();
	virtual void use() = 0;
};

