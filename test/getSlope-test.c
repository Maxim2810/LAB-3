#include "geometry.h"
double getSlope(double x1, double y1, double x2, double y2)
{
    return (y2 - y1) / (x2 - x1);
}
TEST_CASE("GETSLOPE", "[SLOPE]") {
  REQUIRE(getSlope(0, 0, 2, 2) == 1);
  REQUIRE(getSlope(10, 2, 12, 4) == 1);
  cout << "Test getSlope" << endl;
}
