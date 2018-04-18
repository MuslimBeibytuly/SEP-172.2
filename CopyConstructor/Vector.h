#pragma once
class Vector
{
public:
	int *a;
	int size;
	Vector(const Vector &);
	Vector(int n);
	~Vector();
};

