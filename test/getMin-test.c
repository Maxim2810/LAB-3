#include "geometry.h"
double getMin(double x1, double x2)
{
    return x1 < x2 ? x1 : x2;
}
TEST_CASE("GETMIN", "[MIN]") {
  REQUIRE(getMin(1, 2) == 1);
  REQUIRE(getMin(3, 5) == 3);
  REQUIRE(getMin(-1000, 50) == -1000);
  REQUIRE(getMin(-10.5, 0) == -10.5);
  cout << "Test getMin" << endl;
}
