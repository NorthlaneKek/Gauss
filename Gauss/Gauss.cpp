#include "stdafx.h"
#include <stdlib.h>
#include <time.h>
#include <locale.h>
#include "gs.h"
#include <iostream>
using namespace std;
int main()
{
setlocale(LC_ALL, "rus");
double **matr, *x, *b;
int i, j, n;
cout<<"¬ведите размер системы\n";
cin>>n;
matr = new double*[n];
for (i = 0; i < n; i++)
matr[i] = new double[n];
x = new double[n];
b = new double[n];
input(matr, b, n);
gauss(matr, x, b, n);
for (int i = 0; i < n; i++)
{ 
delete[]matr[i];
}
delete[]matr;
delete[]x;
delete[]b;
}