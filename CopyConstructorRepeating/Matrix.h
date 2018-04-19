#pragma once
class Matrix
{
public:
	int **a;
	int n, m;
	Matrix(int, int);
	Matrix(const Matrix &);
	~Matrix();
};

