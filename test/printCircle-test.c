#include "geometry.h"
double pi = 3.14159265359;
int printCircle(double x1, double y1, double r1, bool flag, int lkl) {
  if (flag == true) {
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

TEST_CASE("PRINT_CIRCLE", "[CIRCLE]") {
  bool flag_ = false;
  REQUIRE(printCircle(0, 0, 346, flag_, 1) == 0);
  flag_ = true;
  REQUIRE(printCircle(0, 0, 235, flag_, 1) == 1);
  REQUIRE(printCircle(0, 0, 235, flag_, 2) == 2);
  REQUIRE(printCircle(0, 0, 235, flag_, 3) == 3);
  cout << "Test printCircle" << endl;
}
