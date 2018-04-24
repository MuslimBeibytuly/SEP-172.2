#pragma once
#include <string>
#include <iostream>
class Reservoir
{
	int id;
	static int cnt;
	std::string name, type;
	double width, length, depth;
public:
	int getId() const;
	void setId(int id);
	double getVolume() const;
	double getArea() const;
	bool typeEquals(const Reservoir &) const;
	bool hasAreaMoreThan(Reservoir &);
	explicit Reservoir(const Reservoir &);
	explicit Reservoir(std::string);
	explicit Reservoir();
	~Reservoir();
};

int Reservoir::cnt = 0;