#include <stdio.h>

int main(int argc, char **argv)
{
    int x = -8;
    float f = -444.444;
    double d = -88.88888;

    printf("x = %d, f = %f, d = %f\n", x, f, d);
    printf("x == (int)(float)x => %d\n", (x == (int)(float)x));
    printf("x == (int)(double)x => %d\n", (x == (int)(double)x));
    printf("f == (float)(double)f => %d\n", (f == (float)(double)f));
    printf("d == (double)(float)d => %d\n", (d == (double)(float)d));
    printf("f == -(-f) => %d\n", (f == -(-f)));
    printf("2/3 == 2/3.0 => %d\n", ((2/3) == (2/3.0)));
    printf("d > f => (-f > -d) => %d\n", (-f > -d));
    printf("d * d >= 0.0 => %d\n", (d * d >= 0.0));

    f = -1.54334E-34;
    d = -88.88888;
    printf("Changed f = %f, d = %f\n", f, d);
    printf("(d+f)-d == f => %d\n", ((d+f)-d == f));

    return 0;
}