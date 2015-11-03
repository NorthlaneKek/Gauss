#pragma once
#include "stdafx.h"
#ifndef func
#define func
#include <iostream>
using namespace std;
void input(double **matr, double *b, int &size);
void gauss(double **matr, double *x, double *b, int size);

class Rational
{
	int m,n;
	void NOD();
public:
	Rational()
	{
		m=0;
		n=1;
	}

	Rational(int p, int q);
	Rational operator+(Rational r);
	void operator=(int k);
	friend ostream& operator <<(ostream& os, Rational r);
	friend istream& operator >>(istream& is, Rational& r);

};

#endif