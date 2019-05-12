#include "geometry.h"
int testing(double a, double b, double c, double& J)
{
    int cs;
    cs = (b * b + c * c - (a * a)) / 2 * b * c;
    if (cs < 0) {
        J = b;
        return 1;
    }
    cs = (a * a + c * c - (b * b)) / 2 * a * c;
    if (cs < 0) {
        J = a;
        return 1;
    }
    return -1;
}
