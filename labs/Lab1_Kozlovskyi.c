#include <stdio.h>
#include <math.h>

int main() {
    double x;
    double y;
    double z;
    printf(" x:\n");
    scanf("%lf", &x);
    printf(" y:\n");
    scanf("%lf", &y);
    z = (((x*y) + (pow(x, 2)*pow(y, 2))) / (tan(pow(x, 5)*pow(y, 5)))) - (cos(x*y)) + (x*pow(pow(y, 5), 1.0 / 6)) + (173.11*x);
    printf("%lf\n", z);
    return 0;
}

