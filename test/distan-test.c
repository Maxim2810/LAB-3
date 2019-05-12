#include "geometry.h"
void distan(double x, double y, double x1, double y1, double& L)
{
    L = sqrt((x - x1) * (x - x1) + (y - y1) * (y - y1));
}
TEST_CASE("DISTAN OT POINT DO POINT", "[DLINA]") {
  double L = 0;
  REQUIRE(distan(0, 3, 0, 7, L) == 4);
  REQUIRE(distan(2, 3, 7, 3, L) == 5);
  REQUIRE(distan(5, 6, 5, 1, L) == 5);
  REQUIRE(distan(-2, 0, 2, 0, L) == 4);
  REQUIRE(distan(0, 7, 0, 3, L) == 4);
  REQUIRE(distan(7, 3, 2, 3, L) == 5);
  REQUIRE(distan(5, 1, 5, 6, L) == 5);
  REQUIRE(distan(2, 0, -2, 0, L) == 4);
  cout << "Test distan" << endl;
}
