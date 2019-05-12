#include "geometry.h"
int printPoligon(double x1, double y1, double x2, double y2, double x3,
                 double y3, double x4, double y4, bool flag, int lkl) {
  ;
  if (flag == 1) {
    if (lkl == 1) {
      return 1;
    } else if (lkl == 2) {
      return 2;

    } else if (lkl == 3) {
      return 3;
    }
  } else
    return 0;
  return 0;
}
TEST_CASE("PRINT_POLIGON", "[POLIGON]") {
  bool flag_ = false;
  REQUIRE(printPoligon(1, 1, 1, 1, 1, 1, 1, 1, flag_, 1) == 0);
  flag_ = true;
  REQUIRE(printPoligon(1, 1, 1, 1, 1, 1, 1, 1, flag_, 1) == 1);
  REQUIRE(printPoligon(1, 1, 1, 1, 1, 1, 1, 1, flag_, 2) == 2);
  REQUIRE(printPoligon(1, 1, 1, 1, 1, 1, 1, 1, flag_, 3) == 3);
  cout << "Test print poligon" << endl;
}
