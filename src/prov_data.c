#include "figure.h"
#include "geometry.h"
extern struct Figure circle;
extern struct Figure triangle;
extern struct Figure poligon;
extern struct Figure circle2;
extern struct Figure triangle2;
extern struct Figure poligon2;

void prov_data(
        int f,
        int f1,
        int& k,
        int& lkl1,
        int& lkl2,
        int& lkl3,
        int& lkl_1,
        int& lkl_2,
        int& lkl_3)
{
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
}
