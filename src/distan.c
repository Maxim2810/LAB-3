#include "geometry.h"
void distan(double x, double y, double x1, double y1, double& L)
{
    L = sqrt((x - x1) * (x - x1) + (y - y1) * (y - y1));
}
