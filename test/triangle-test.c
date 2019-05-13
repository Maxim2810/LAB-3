#include "geometry.h"
int printTriangle(double x1, double y1, double x2, double y2, double x3,
                  double y3, bool flag, int lkl) {
  if (flag == 1) {
    if (lkl == 1) {
      return 1;

    } else if (lkl == 2) {
      return 2;

    } else if (lkl == 3) {
      return 3;
    }
  } else {
    return 0;
  }
  return 0;
}
TEST_CASE("PRINT_TRIANGLE", "[TRIANGLE]") {
  bool flag_ = false;
  REQUIRE(printTriangle(1, 1, 1, 1, 1, 1, flag_, 1) == 0);
  flag_ = true;
  REQUIRE(printTriangle(1, 1, 1, 1, 1, 1, flag_, 1) == 1);
  REQUIRE(printTriangle(1, 1, 1, 1, 1, 1, flag_, 2) == 2);
  REQUIRE(printTriangle(1, 1, 1, 1, 1, 1, flag_, 3) == 3);
  cout << "Test print Triagle" << endl;
}
