#include <stdio.h>
#include <stdlib.h>
#include<math.h>
#include"geometry.h"

//////////////////////////////////////////////////////////
double dist(double coord1[], double coord2[], int m)
{
    double s = 0.0;
    int j;
    for(j = 0; j < m; ++j)
        s += pow(coord1[j] - coord2[j], 2);
    return sqrt(s);
}
//////////////////////////////////////////////////////////
double heron_area(double a, double b, double c)
{
    double p = (a + b + c) / 2;
    return sqrt(p * (p - a) * (p - b) * (p - c));
}
//////////////////////////////////////////////////////////
void print(const wchar_t format[], double s)
{
    wprintf(format, s);
}
//////////////////////////////////////////////////////////
void input(double coord[], int m, int i)
{
    int j;
    wprintf(L"Enter the coordinates of the point %d:\n", i);
    for(j = 0; j < m; ++j)
    do
    {
        printf("%c = ", 'x' + j);
        fflush(stdin);
    }
    while(scanf("%lg", &coord[j]) != 1);
}
