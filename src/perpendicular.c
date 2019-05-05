#include "geometry.h"
void perpendicular(double a, double b, double c, double P, double& H)
{
    H = (2 * sqrt(P * (P - a) * (P - b) * (P - c))) / c;
}
