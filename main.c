#include <stdio.h>
#include <stdlib.h>
#include<math.h>
#include"geometry.h"
#define N 3
#define M 2

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

