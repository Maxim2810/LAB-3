bool areCollinear(double x1, double y1, double x2, double y2)
{
    return x1 / x2 == y1 / y2 ? true : false;
}

TEST_CASE("ARECOLLINEAR", "[double]") {
  REQUIRE(areCollinear(4, 12, 2, 6) == 1);
  REQUIRE(areCollinear(1, 1, 1, 1) == 1);
  REQUIRE(areCollinear(90, 12, 2, 6) == 0);
  REQUIRE(areCollinear(123, 12, 2, 6) == 0);
  cout << "Test areCollinear" << endl;
}
