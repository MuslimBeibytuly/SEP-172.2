#include "Matrix.h"



Matrix::Matrix(int n, int m)
{
	this->n = n;
	this->m = m;
	a = new int *[n];
	for (int i = 0; i < n; i++)
	{
		a[i] = new int[m];
	}
}

Matrix::Matrix(const Matrix & matrix)
{
	n = matrix.n;
	m = matrix.m;
	a = new int *[n];
	for (int i = 0; i < n; i++)
	{
		a[i] = new int[m];
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			a[i][j] = matrix.a[i][j];
		}
	}
}


Matrix::~Matrix()
{
	for (int i = 0; i < n; ++i) {
		delete[] a[i];
	}
	delete[] a;
}
