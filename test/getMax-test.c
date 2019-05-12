#include "geometry.h"
double getMax(double x1, double x2)
{
    return x1 > x2 ? x1 : x2;
}
TEST_CASE("GETMAX", "[MAX]") {
  REQUIRE(getMax(1, 2) == 2);
  REQUIRE(getMax(3, 5) == 5);
  REQUIRE(getMax(-1000, 50) == 50);
  REQUIRE(getMax(-10.5, 0) == 0);
  cout << "Test getMax" << endl;
}
