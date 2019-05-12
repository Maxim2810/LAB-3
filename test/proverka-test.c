#include "geometry.h"
double testing_prov(double a, double b, double c, double &J) {
  int cs;
  cs = (b * b + c * c - (a * a)) / 2 * b * c;
  if (cs < 0) {
    J = b;
    return 1;
  }
  cs = (a * a + c * c - (b * b)) / 2 * a * c;
  if (cs < 0) {
    J = a;
    return 1;
  }
  return -1;
}

void perpendicular_prov(double a, double b, double c, double P, double &H) {
  H = (2 * sqrt(P * (P - a) * (P - b) * (P - c))) / c;
}

void distan_prov(double x, double y, double x1, double y1, double &L) {
  L = sqrt((x - x1) * (x - x1) + (y - y1) * (y - y1));
}

int proverka(double x0, double y0, double x1, double y1, double x2, double y2,
             double &Perimetr, double r, bool &okr) {
  double a, b, c, H, dl, J, Poluper;

  distan_prov(x0, y0, x1, y1, a);
  distan_prov(x0, y0, x2, y2, b);
  distan_prov(x1, y1, x2, y2, c);
  Perimetr = a + b + c;

  Poluper = Perimetr / 2;
  dl = testing_prov(a, b, c, J);
  if (dl == -1) {
    perpendicular_prov(a, b, c, Poluper, H);
    dl = H;

  } else
    dl = J;
  if (dl <= r) {
    okr = true;
    return 1;
  } else
    return 0;
}

TEST_CASE("PROVERKA_PERESECH_OKR_I_LIN", "[PERESECH]") {
  double Perimetr;
  bool okr;
  REQUIRE(proverka(0, 0, -1, 3, 3, -2, Perimetr, 2, okr) == 1);
  REQUIRE(proverka(0, 0, 2, 9, 2, -9, Perimetr, 2, okr) == 1);
  REQUIRE(proverka(0, 0, -3, -3, -3, -2, Perimetr, 2, okr) == 0);
  cout << "Test proverka peresech" << endl;
}
