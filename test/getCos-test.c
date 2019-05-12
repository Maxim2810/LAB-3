#include "geometry.h"
double getCos(double x1, double y1, double x2, double y2)
{
    return (x1 * x2 + y1 * y2)
            / (sqrt(x1 * x1 + y1 * y1) + sqrt(x2 * x2 + y2 * y2));
}
TEST_CASE("GET_COS", "[COS]") {
  REQUIRE(getCos(0, 0, 2, 2) == 0);
  REQUIRE(getCos(4, 3, -4, -3) == -2.5);
  cout << "Test getCos" << endl;
}
