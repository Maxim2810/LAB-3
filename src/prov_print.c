#include "figure.h"
#include "geometry.h"

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

extern struct Figure circle;
extern struct Figure triangle;
extern struct Figure poligon;
extern struct Figure circle2;
extern struct Figure triangle2;
extern struct Figure poligon2;

void prov_print(
        int lkl1,
        int lkl2,
        int lkl3,
        int lkl_1,
        int lkl_2,
        int lkl_3,
        bool& fact,
        double& Perimetr1,
        bool& okr)
{
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
}
