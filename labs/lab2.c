#include <stdio.h>
#include <math.h>

int mac () {
    double min = 0.4, max = 0.8;
    double step = 0.02;
    double res = 0.0;
    for (double x = min; x <= max+step/2; x += step)
    {
        if (x < 0.5)
        {
            res = fabs(pow(log(x),7));
        }
        else if (0.5 <= x < 0.7)
        {
            res = 1.0/tan(x+pow(x,3));
        }
        else if (x >= 0.7)
        {
            res = log(sin(x))/log(5);
        }
        printf("%.2lf \t %lf\n", x, res);
    }
    return 0;
}

