#include <stdio.h>
#include <stdlib.h>
#include<math.h>
//////////////////////////////////////////////////////////
double dist(double x1, double y1, double x2, double y2);
double heron_area(double, double, double);
void print(const wchar_t format[], double);
//////////////////////////////////////////////////////////
int main()
{
    double x1, y1, x2, y2, x3, y3,  //the coordinates of the vertices
           a, b, c,                 //side of triangle
           S;                       //area

    wprintf(L"Enter the coordinates of the three vertices -> ");
    scanf("%lf %lf %lf %lf %lf %lf", &x1, &y1, &x2, &y2, &x3, &y3);

    a = dist(x1, y1, x2, y2);
    b = dist(x2, y2, x3, y3);
    c = dist(x3, y3, x1, y1);

    S = heron_area(a, b, c);

    print(L"\nArea = %.3g\n\n", S);

    return 0;
}
//////////////////////////////////////////////////////////
double dist(double x1, double y1, double x2, double y2)
{
    return sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2));
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
