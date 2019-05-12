#include "geometry.h"
void perpendicular(double a, double b, double c, double P, double& H)
{
    H = (2 * sqrt(P * (P - a) * (P - b) * (P - c))) / c;
}
TEST_CASE("DLINA_PERPENDICULARA", "[90*]") {
  REQUIRE(perpendicular(11, 11, 10, 16) == 9);
  REQUIRE(perpendicular(6, 6, 9, 10.5) == 3);
  cout << "Test perpendicular" << endl;
}
