#include <stdio.h>
#include <stdlib.h>
#include<math.h>
#define N 3
#define M 2
//////////////////////////////////////////////////////////
double dist(double coord1[], double coord2[], int m);
double heron_area(double, double, double);
void print(const wchar_t format[], double);
void input(double coord[], int m, int i);
//////////////////////////////////////////////////////////
int main()
{
    double coord[N][M];             //the coordinates of the vertices
    double a, b, c,                 //side of triangle
           S;
    int i;                          //area


    for(i = 0; i < N; ++i)
            input(coord[i], M, i+1);

    a = dist(coord[0], coord[1], M);
    b = dist(coord[1], coord[2], M);
    c = dist(coord[2], coord[0], M);

    S = heron_area(a, b, c);

    print(L"\nArea = %.3g\n\n", S);

    return 0;
}
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
