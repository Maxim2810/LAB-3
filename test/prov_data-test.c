
#include "geometry.h"
int prov_data(int f, int f1) {
  if (f == 1 && f1 == 1) {
    return 11;
  }
  if (f == 2 && f1 == 2) {
    return 22;
  }
  if (f == 3 && f1 == 3) {
    return 33;
  }

  if (f == 1 || f1 == 1) {
    return 1;
  }

  if (f == 2 || f1 == 2) {
    return 2;
  }

  if (f == 3 || f1 == 3) {
    return 3;
  }
  return 0;
}
TEST_CASE("TEST_PROV_DATA", "[PROVERKA]") {
  REQUIRE(prov_data(1, 1) == 11);
  REQUIRE(prov_data(2, 2) == 22);
  REQUIRE(prov_data(3, 3) == 33);
  REQUIRE(prov_data(1, 2) == 1);
  REQUIRE(prov_data(2, 3) == 2);
  cout << "Test prov data" << endl;
}

