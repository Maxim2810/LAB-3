#include "geometry.h"

void input_data(int f, int f1)
{
    if (f1 < 1 || f < 1 || f1 > 3 || f > 3) {
        cout << "ERROR INPUT DATA" << endl;
        exit(0);
    }
}
TEST_CASE("INPUTDATA", "[INPUT]") {
  REQUIRE(input_data(1, 2) == 1);
  REQUIRE(input_data(1, 3) == 1);
  REQUIRE(input_data(2, 3) == 1);
  REQUIRE(input_data(3, 2) == 1);
  REQUIRE(input_data(-123, 235) == 0);
  REQUIRE(input_data(3423, 1) == 0);
  cout << "Test input data" << endl;
}
