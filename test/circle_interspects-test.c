#include "geometry.h"

extern void
printCircle(double x1, double y1, double r1, bool flag, int k, int lkl, int n);

void circle_intersects(
        double x, double y, double r, double x1, double y1, double r1)
{
    bool flag;
    double N;
    N = sqrt((x - x1) * (x - x1) + (y - y1) * (y - y1));
    if (x == x1 && y == y1 && r == r1) {
        flag = true;
    } else if (x == x1 && y == y1 && (r < r1 || r > r1)) {
        flag = false;
    } else if (N == (r + r1)) {
        flag = true;
    } else if (N <= (r + r1)) {
        flag = true;
    }
    printCircle(x, y, r, flag, 2, 1, 1);
    printCircle(x1, y1, r1, flag, 1, 1, 2);
}
