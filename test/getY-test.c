#include "geometry.h"
double getYIntercept(double x1, double y1, double x2, double y2)
{
    return (x2 * y1 - x1 * y2) / (x2 - x1);
}
TEST_CASE("GETYINTERCEPT", "[INTERSEPT]") {
  REQUIRE(getYIntercept(2, 3, 1, 1) == -1);
  REQUIRE(getYIntercept(5, 8, 20, 5) == 9);
  cout << "Test getSlope" << endl;
}
