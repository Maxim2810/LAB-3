#include "figure.h"
#include "geometry.h"

extern int input_data(int f, int f1);

extern void prov_data(
        int f,
        int f1,
        int& k,
        int& lkl1,
        int& lkl2,
        int& lkl3,
        int& lkl_1,
        int& lkl_2,
        int& lkl_3);

extern void prov_print(
        int lkl1,
        int lkl2,
        int lkl3,
        int lkl_1,
        int lkl_2,
        int lkl_3,
        bool& fact,
        double& Perimetr1,
        bool& okr);

struct Figure circle;
struct Figure triangle;
struct Figure poligon;
struct Figure circle2;
struct Figure triangle2;
struct Figure poligon2;
int main()
{
    cout << "\t\t\t  |Select two figures|" << endl;
    cout << " _________________________________________________________________"
            "___________"
         << endl;
    cout << "|1.Circle(Press'1')|2.Triangle(Press'2')|3.Polygon(Press'3')|exit("
            "Press'esc')|"
         << endl;
    cout << "|__________________|____________________|___________________|_____"
            "___________|"
         << endl;
    double Perimetr1;

    int k = 0, lkl1 = 0, lkl2 = 0, lkl3 = 0, f = 2, f1 = 2, lkl_1 = 0,
        lkl_2 = 0, lkl_3 = 0;
    bool fact = false, okr = false;

    cin >> f;
    cin >> f1;
    input_data(f, f1);
    prov_data(f, f1, k, lkl1, lkl2, lkl3, lkl_1, lkl_2, lkl_3);
    prov_print(lkl1, lkl2, lkl3, lkl_1, lkl_2, lkl_3, fact, Perimetr1, okr);

    return 0;
}
