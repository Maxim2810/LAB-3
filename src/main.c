#include "geometry.h"
#include "figure.h"

extern void circle_intersects(
        double x, double y, double r, double x1, double y1, double r1);
extern void proverka(
        double x0,
        double y0,
        double x1,
        double y1,
        double x2,
        double y2,
        double& Perimetr,
        double r,
        bool& okr);
extern int peresech(
        double x1,
        double y1,
        double x2,
        double y2,
        double x3,
        double y3,
        double x4,
        double y4,
        bool& fact);
extern void printTriangle(
        double x1,
        double y1,
        double x2,
        double y2,
        double x3,
        double y3,
        bool flag,
        int k,
        int lkl,
        int n);
extern void
printCircle(double x1, double y1, double r1, bool flag, int k, int lkl, int n);
extern void printPoligon(
        double x1,
        double y1,
        double x2,
        double y2,
        double x3,
        double y3,
        double x4,
        double y4,
        bool flag,
        int k,
        int lkl,
        int n);
extern int input_data(int f,int f1);
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
    struct Figure {
        double x;
        double y;
        double x1;
        double y1;
        double x2;
        double y2;
        double x3;
        double y3;
        double r;
    };

    Figure circle;
    Figure triangle;
    Figure poligon;
    Figure circle2;
    Figure triangle2;
    Figure poligon2;
    int k = 0, lkl1 = 0, lkl2 = 0, lkl3 = 0, f = 2, f1 = 2, lkl_1 = 0,
        lkl_2 = 0, lkl_3 = 0;
    bool fact = false, okr = false;

    cin >> f;
    cin >> f1;
    input_data(f,f1);
   
    if (f == 1 && f1 == 1) {
        lkl_1 = 1;
        printf("( x  y , r) ");
        cin >> circle2.x;
        cin >> circle2.y;
        cin >> circle2.r;
        cout << endl;
        k++;
    }
    if (f == 2 && f1 == 2) {
        lkl_2 = 2;
        printf("((x1 y1 , x2, y2 , x3 y3)) ");
        cin >> triangle2.x;
        cin >> triangle2.y;
        cin >> triangle2.x1;
        cin >> triangle2.y1;
        cin >> triangle2.x2;
        cin >> triangle2.y2;
        cout << endl;
        k++;
    }
    if (f == 3 && f1 == 3) {
        lkl_3 = 3;
        printf("((x1 y1 , x2, y2 , x3 y3 , x4 y4)) ");
        cin >> poligon2.x;
        cin >> poligon2.y;
        cin >> poligon2.x1;
        cin >> poligon2.y1;
        cin >> poligon2.x2;
        cin >> poligon2.y2;
        cin >> poligon2.x3;
        cin >> poligon2.y3;
        cout << endl;
        k++;
    }

    if (f == 1 || f1 == 1) {
        lkl1 = 1;
        printf("( x  y , r) ");
        cin >> circle.x;
        cin >> circle.y;
        cin >> circle.r;
        cout << endl;
        k++;
    }

    if (f == 2 || f1 == 2) {
        lkl2 = 2;
        printf("((x1 y1 , x2, y2 , x3 y3)) ");
        cin >> triangle.x;
        cin >> triangle.y;
        cin >> triangle.x1;
        cin >> triangle.y1;
        cin >> triangle.x2;
        cin >> triangle.y2;
        cout << endl;
        k++;
    }

    if (f == 3 || f1 == 3) {
        lkl3 = 3;
        printf("((x1 y1 , x2, y2 , x3 y3 , x4 y4)) ");
        cin >> poligon.x;
        cin >> poligon.y;
        cin >> poligon.x1;
        cin >> poligon.y1;
        cin >> poligon.x2;
        cin >> poligon.y2;
        cin >> poligon.x3;
        cin >> poligon.y3;
        cout << endl;
        k++;
    }
    if (lkl_1 == 1 && lkl1 == 1) {
        circle_intersects(
                circle.x, circle.y, circle.r, circle2.x, circle2.y, circle2.r);
    }

    if (lkl_2 == 2 && lkl2 == 2) {
        peresech(
                triangle.x,
                triangle.y,
                triangle.x1,
                triangle.y1,
                triangle2.x,
                triangle2.y,
                triangle2.x1,
                triangle2.y1,
                fact);
        if (fact == false)
            peresech(
                    triangle.x,
                    triangle.y,
                    triangle.x1,
                    triangle.y1,
                    triangle2.x1,
                    triangle2.y1,
                    triangle2.x2,
                    triangle2.y2,
                    fact);
        if (fact == false)
            peresech(
                    triangle.x,
                    triangle.y,
                    triangle.x1,
                    triangle.y1,
                    triangle2.x2,
                    triangle2.y2,
                    triangle2.x,
                    triangle2.y,
                    fact);
        if (fact == false)

            if (fact == false)
                peresech(
                        triangle.x1,
                        triangle.y1,
                        triangle.x2,
                        triangle.y2,
                        triangle2.x,
                        triangle2.y,
                        triangle2.x1,
                        triangle2.y1,
                        fact);
        if (fact == false)
            peresech(
                    triangle.x1,
                    triangle.y1,
                    triangle.x2,
                    triangle.y2,
                    triangle2.x1,
                    triangle2.y1,
                    triangle2.x2,
                    triangle2.y2,
                    fact);
        if (fact == false)
            peresech(
                    triangle.x1,
                    triangle.y1,
                    triangle.x2,
                    triangle.y2,
                    triangle2.x2,
                    triangle2.y2,
                    triangle2.x,
                    triangle2.y,
                    fact);

        if (fact == false)
            peresech(
                    triangle.x2,
                    triangle.y2,
                    triangle.x,
                    triangle.y,
                    triangle2.x,
                    triangle2.y,
                    triangle2.x1,
                    triangle2.y1,
                    fact);
        if (fact == false)
            peresech(
                    triangle.x2,
                    triangle.y2,
                    triangle.x,
                    triangle.y,
                    triangle2.x1,
                    triangle2.y1,
                    triangle2.x2,
                    triangle2.y2,
                    fact);
        if (fact == false)
            peresech(
                    triangle.x2,
                    triangle.y2,
                    triangle.x,
                    triangle.y,
                    triangle2.x2,
                    triangle2.y2,
                    triangle2.x,
                    triangle2.y,
                    fact);

        printTriangle(
                triangle.x,
                triangle.y,
                triangle.x1,
                triangle.y1,
                triangle.x2,
                triangle.y2,
                fact,
                2,
                2,
                1);
        printTriangle(
                triangle2.x,
                triangle2.y,
                triangle2.x1,
                triangle2.y1,
                triangle2.x2,
                triangle2.y2,
                fact,
                1,
                2,
                2);
    }

    if (lkl_3 == 3 && lkl3 == 3) {
        peresech(
                poligon.x,
                poligon.y,
                poligon.x1,
                poligon.y1,
                poligon2.x,
                poligon2.y,
                poligon2.x1,
                poligon2.y1,
                fact);
        if (fact == false)
            peresech(
                    poligon.x,
                    poligon.y,
                    poligon.x1,
                    poligon.y1,
                    poligon2.x1,
                    poligon2.y1,
                    poligon2.x2,
                    poligon2.y2,
                    fact);
        if (fact == false)
            peresech(
                    poligon.x,
                    poligon.y,
                    poligon.x1,
                    poligon.y1,
                    poligon2.x2,
                    poligon2.y2,
                    poligon2.x3,
                    poligon2.y3,
                    fact);
        if (fact == false)
            peresech(
                    poligon.x,
                    poligon.y,
                    poligon.x1,
                    poligon.y1,
                    poligon2.x,
                    poligon2.y,
                    poligon2.x3,
                    poligon2.y3,
                    fact);

        if (fact == false)
            peresech(
                    poligon.x1,
                    poligon.y1,
                    poligon.x2,
                    poligon.y2,
                    poligon2.x,
                    poligon2.y,
                    poligon2.x1,
                    poligon2.y1,
                    fact);
        if (fact == false)
            peresech(
                    poligon.x1,
                    poligon.y1,
                    poligon.x2,
                    poligon.y2,
                    poligon2.x1,
                    poligon2.y1,
                    poligon2.x2,
                    poligon2.y2,
                    fact);
        if (fact == false)
            peresech(
                    poligon.x1,
                    poligon.y1,
                    poligon.x2,
                    poligon.y2,
                    poligon2.x2,
                    poligon2.y2,
                    poligon2.x3,
                    poligon2.y3,
                    fact);
        if (fact == false)
            peresech(
                    poligon.x1,
                    poligon.y1,
                    poligon.x2,
                    poligon.y2,
                    poligon2.x,
                    poligon2.y,
                    poligon2.x3,
                    poligon2.y3,
                    fact);

        if (fact == false)
            peresech(
                    poligon.x2,
                    poligon.y2,
                    poligon.x3,
                    poligon.y3,
                    poligon2.x,
                    poligon2.y,
                    poligon2.x1,
                    poligon2.y1,
                    fact);
        if (fact == false)
            peresech(
                    poligon.x2,
                    poligon.y2,
                    poligon.x3,
                    poligon.y3,
                    poligon2.x1,
                    poligon2.y1,
                    poligon2.x2,
                    poligon2.y2,
                    fact);
        if (fact == false)
            peresech(
                    poligon.x2,
                    poligon.y2,
                    poligon.x3,
                    poligon.y3,
                    poligon2.x2,
                    poligon2.y2,
                    poligon2.x3,
                    poligon2.y3,
                    fact);
        if (fact == false)
            peresech(
                    poligon.x2,
                    poligon.y2,
                    poligon.x3,
                    poligon.y3,
                    poligon2.x,
                    poligon2.y,
                    poligon2.x3,
                    poligon2.y3,
                    fact);

        if (fact == false)
            peresech(
                    poligon.x,
                    poligon.y,
                    poligon.x3,
                    poligon.y3,
                    poligon2.x,
                    poligon2.y,
                    poligon2.x1,
                    poligon2.y1,
                    fact);
        if (fact == false)
            peresech(
                    poligon.x,
                    poligon.y,
                    poligon.x3,
                    poligon.y3,
                    poligon2.x1,
                    poligon2.y1,
                    poligon2.x2,
                    poligon2.y2,
                    fact);
        if (fact == false)
            peresech(
                    poligon.x,
                    poligon.y,
                    poligon.x3,
                    poligon.y3,
                    poligon2.x2,
                    poligon2.y2,
                    poligon2.x3,
                    poligon2.y3,
                    fact);
        if (fact == false)
            peresech(
                    poligon.x,
                    poligon.y,
                    poligon.x3,
                    poligon.y3,
                    poligon2.x,
                    poligon2.y,
                    poligon2.x3,
                    poligon2.y3,
                    fact);

        printPoligon(
                poligon.x,
                poligon.y,
                poligon.x1,
                poligon.y1,
                poligon.x2,
                poligon.y2,
                poligon.x3,
                poligon.y3,
                fact,
                2,
                3,
                1);
        printPoligon(
                poligon2.x,
                poligon2.y,
                poligon2.x1,
                poligon2.y1,
                poligon2.x2,
                poligon2.y2,
                poligon2.x3,
                poligon2.y3,
                fact,
                1,
                3,
                2);
    }

    if (lkl1 == 1 && lkl2 == 2) {
        proverka(
                circle.x,
                circle.y,
                triangle.x,
                triangle.y,
                triangle.x1,
                triangle.y1,
                Perimetr1,
                circle.r,
                okr);
        if (okr != 1)
            proverka(
                    circle.x,
                    circle.y,
                    triangle.x1,
                    triangle.y1,
                    triangle.x2,
                    triangle.y2,
                    Perimetr1,
                    circle.r,
                    okr);
        if (okr != 1)
            proverka(
                    circle.x,
                    circle.y,
                    triangle.x,
                    triangle.y,
                    triangle.x2,
                    triangle.y2,
                    Perimetr1,
                    circle.r,
                    okr);
        printCircle(circle.x, circle.y, circle.r, okr, 2, lkl2, 1);
        printTriangle(
                triangle.x,
                triangle.y,
                triangle.x1,
                triangle.y1,
                triangle.x2,
                triangle.y2,
                okr,
                1,
                lkl1,
                2);
    }
    if (lkl1 == 1 && lkl3 == 3) {
        proverka(
                circle.x,
                circle.y,
                poligon.x,
                poligon.y,
                poligon.x1,
                poligon.y1,
                Perimetr1,
                circle.r,
                okr);
        if (okr != 1)
            proverka(
                    circle.x,
                    circle.y,
                    poligon.x1,
                    poligon.y1,
                    poligon.x2,
                    poligon.y2,
                    Perimetr1,
                    circle.r,
                    okr);
        if (okr != 1)
            proverka(
                    circle.x,
                    circle.y,
                    poligon.x2,
                    poligon.y2,
                    poligon.x3,
                    poligon.y3,
                    Perimetr1,
                    circle.r,
                    okr);
        if (okr != 1)
            proverka(
                    circle.x,
                    circle.y,
                    poligon.x3,
                    poligon.y3,
                    poligon.x,
                    poligon.y,
                    Perimetr1,
                    circle.r,
                    okr);
        printCircle(circle.x, circle.y, circle.r, okr, 2, lkl3, 1);
        printPoligon(
                poligon.x,
                poligon.y,
                poligon.x1,
                poligon.y1,
                poligon.x2,
                poligon.y2,
                poligon.x3,
                poligon.y3,
                okr,
                1,
                lkl1,
                2);
    }

    if (lkl3 == 3 && lkl2 == 2) {
        peresech(
                triangle.x,
                triangle.y,
                triangle.x1,
                triangle.y1,
                poligon.x,
                poligon.y,
                poligon.x1,
                poligon.y1,
                fact);
        if (fact == false)
            peresech(
                    triangle.x,
                    triangle.y,
                    triangle.x1,
                    triangle.y1,
                    poligon.x1,
                    poligon.y1,
                    poligon.x2,
                    poligon.y2,
                    fact);
        if (fact == false)
            peresech(
                    triangle.x,
                    triangle.y,
                    triangle.x1,
                    triangle.y1,
                    poligon.x2,
                    poligon.y2,
                    poligon.x3,
                    poligon.y3,
                    fact);
        if (fact == false)
            peresech(
                    triangle.x,
                    triangle.y,
                    triangle.x1,
                    triangle.y1,
                    poligon.x,
                    poligon.y,
                    poligon.x3,
                    poligon.y3,
                    fact);
        if (fact == false)
            peresech(
                    triangle.x1,
                    triangle.y1,
                    triangle.x2,
                    triangle.y2,
                    poligon.x,
                    poligon.y,
                    poligon.x1,
                    poligon.y1,
                    fact);
        if (fact == false)
            peresech(
                    triangle.x1,
                    triangle.y1,
                    triangle.x2,
                    triangle.y2,
                    poligon.x1,
                    poligon.y1,
                    poligon.x2,
                    poligon.y2,
                    fact);
        if (fact == false)
            peresech(
                    triangle.x1,
                    triangle.y1,
                    triangle.x2,
                    triangle.y2,
                    poligon.x2,
                    poligon.y2,
                    poligon.x3,
                    poligon.y3,
                    fact);
        if (fact == false)
            peresech(
                    triangle.x1,
                    triangle.y1,
                    triangle.x2,
                    triangle.y2,
                    poligon.x1,
                    poligon.y1,
                    poligon.x2,
                    poligon.y1,
                    fact);
        if (fact == false)
            peresech(
                    triangle.x,
                    triangle.y,
                    triangle.x2,
                    triangle.y2,
                    poligon.x,
                    poligon.y,
                    poligon.x1,
                    poligon.y1,
                    fact);
        if (fact == false)
            peresech(
                    triangle.x,
                    triangle.y,
                    triangle.x2,
                    triangle.y2,
                    poligon.x1,
                    poligon.y1,
                    poligon.x2,
                    poligon.y2,
                    fact);
        if (fact == false)
            peresech(
                    triangle.x,
                    triangle.y,
                    triangle.x2,
                    triangle.y2,
                    poligon.x2,
                    poligon.y2,
                    poligon.x3,
                    poligon.y3,
                    fact);
        if (fact == false)
            peresech(
                    triangle.x,
                    triangle.y,
                    triangle.x2,
                    triangle.y2,
                    poligon.x,
                    poligon.y,
                    poligon.x3,
                    poligon.y3,
                    fact);

        printPoligon(
                poligon.x,
                poligon.y,
                poligon.x1,
                poligon.y1,
                poligon.x2,
                poligon.y2,
                poligon.x3,
                poligon.y3,
                fact,
                2,
                lkl2,
                1);
        printTriangle(
                triangle.x,
                triangle.y,
                triangle.x1,
                triangle.y1,
                triangle.x2,
                triangle.y2,
                fact,
                1,
                lkl3,
                2);
    }

    return 0;
}
