#include "stdafx.h"
#include "stdlib.h"
#include <math.h>
#include <time.h>
#include "gs.h"
#include <iostream>

using namespace std;
void input(double **matr, double *b, int &size)
{
int i, j;
srand(time(NULL));
if (size > 3)
for (i = 0; i < size; i++)
{
for (j = 0; j < size; j++)
{
matr[i][j] = rand() % 15 + 1;
b[i] = rand() % 15 + 1;
}
}
else
for (i = 0; i < size; i++)
{
cout<<"¬ведите matr и b \n";
for (j = 0; j < size; j++)
{
cin>>matr[i][j];
}
cin>>b[i];
}
for (i = 0; i < size; i++)
{
for (j = 0; j < size; j++)
{
	cout<<matr[i][j];
}
cout<<b[i];
}
}
void gauss(double **matr, double *x, double *b, int size)
{
double alpha, sum;

for (int j = 0; j < size; j++)
{
for (int i = j + 1; i < size; i++)
{

alpha = matr[i][j] / matr[j][j];
for (int k = j; k < size; k++)
matr[i][k] -= alpha*matr[j][k];
b[i] -= alpha*b[j];

}
for (int i=0; i<size; i++)
x[i]=0;
for (int i = size - 1; i >= 0; i--)
{
double sum = 0;
for (int j = size-1; j >= i; j--)
	sum += x[j] * matr[i][j];
x[i] = (b[i] - sum) / matr[i][i];
}
}
for (int i=0; i<size; i++)
cout<<x[i];
}

Rational::Rational(int p, int q)
{
	m=p;
	n=q;
}

Rational Rational::operator +(Rational p)
{
	Rational c;
	c.m=m*p.n+n*p.m;
	c.n=n*p.n;
	NOD();
	return c;
}
void Rational::NOD()
{
	int p=abs(m), q=abs(n);
	if (p!=0)
		while (p!=q)
			if (p>q)
				p-=q;
			else q-=p;
			m/=p;
			n/=q;
}
void Rational::operator =(int k)
{
	m=k;
	n=1;
}
ostream& operator<<(ostream& os, Rational r)
{
	os<<r.m<<"/"<<r.m;
	return os;
}
istream& operator>>(istream& is, Rational& r)
{
	is>>r.m>>r.n;
	return is;
}