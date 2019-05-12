#include "geometry.h"
extern double getMin(double x1, double x2);
extern double getMax(double x1, double x2);
bool projectionsIntersect(double x1, double x2, double x3, double x4)
{
    return ((getMin(x1, x2) <= getMin(x3, x4)
             && getMin(x3, x4) <= getMax(x1, x2))
            || ((getMin(x3, x4) <= getMin(x1, x2)
                 && getMin(x1, x2) <= getMax(x3, x4))));
}
