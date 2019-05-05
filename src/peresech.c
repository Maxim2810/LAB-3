#include "geometry.h"

extern bool areCollinear(double x1, double y1, double x2, double y2);

extern double getMin(double x1, double x2);

extern double getMax(double x1, double x2);

extern bool projectionsIntersect(double x1, double x2, double x3, double x4);

extern double getSlope(double x1, double y1, double x2, double y2);

extern double getYIntercept(double x1, double y1, double x2, double y2);

extern double getCos(double x1, double y1, double x2, double y2);

int peresech(double x1, double y1, double x2, double y2, double x3, double y3, double x4, double y4, bool &fact) {
	double slope1, slope2;
	bool f1 = false, f2 = false;
	double yIntercept1, yIntercept2;
	double xIntersection, yIntersection;

	double vx1 = x2 - x1;
	double vy1 = y2 - y1;
	double vx2 = x4 - x3;
	double vy2 = y4 - y3;
	slope1 = (vx1 != 0 ? getSlope(x1, y1, x2, y2) : 0);
	slope2 = (vx2 != 0 ? getSlope(x3, y3, x4, y4) : 0);
	vx1 != 0 ? yIntercept1 = getYIntercept(x1, y1, x2, y2) : f1 = true;
	vx2 != 0 ? yIntercept2 = getYIntercept(x3, y3, x4, y4) : f2 = true;
	if (!f1 && !f2) {
		xIntersection = (yIntercept2 - yIntercept1) / (slope1 - slope2);
		yIntersection = slope1 * xIntersection + yIntercept1;
		if (getCos(x1 - xIntersection, y1 - yIntersection, x2 - xIntersection, y2 - yIntersection) <= 0 && getCos(x3 - xIntersection, y3 - yIntersection, x4 - xIntersection, y4 - yIntersection) <= 0)
			/*cout << "Intersect at a point (" << xIntersection << "," << yIntersection << ")";*/ fact = true;
		else if (yIntercept1 == yIntercept2) {
			if (projectionsIntersect(x1, x2, x3, x4))
				/*	cout << "Overlap";*/ fact = true;
			else
				/* cout << "On the same line, but don't intersect";*/fact = false;
		}
		else if (yIntercept1 != yIntercept2 && (areCollinear(vx1, vy1, vx2, vy2) || (y1 == y2 && y3 == y4)))
			/*cout << "Paralell";*/fact = false;
		else
			/*cout << "Don't intersect";*/fact = false;
	}
	else {
		if (slope1 == 0 && slope2 == 0 && f1 && f2) {
			if (x1 == x4 && projectionsIntersect(y1, y2, y3, y4))
				/* cout << "Overlap";*/fact = true;
			else if (x1 != x4)
				/* cout << "Paralell";*/fact = false;
			else
				/*cout << "On the same line, but don't intersect";*/fact = false;
		}
		else if (f1 ^ f2 && slope1 == 0 && slope2 == 0) {
			if (f1) {
				swap(x1, x3);
				swap(x2, x4);
				swap(y1, y3);
				swap(y2, y4);
				swap(yIntercept1, yIntercept2);
			}
			yIntersection = y1;
			xIntersection = x3;
			if (getCos(x1 - xIntersection, y1 - yIntersection, x2 - xIntersection, y2 - yIntersection) <= 0 && getCos(x3 - xIntersection, y3 - yIntersection, x4 - xIntersection, y4 - yIntersection) <= 0)
				/*cout << "Intersect at a point ("  << xIntersection << "," << yIntersection << ")";*/fact = true;
			else
				/*cout << "Don't intersect";*/ fact = false;
		}
		else if (slope1 == 0 ^ slope2 == 0) {
			if (slope1 == 0) {
				swap(x1, x3);
				swap(x2, x4);
				swap(y1, y3);
				swap(y2, y4);
				swap(yIntercept1, yIntercept2);
			}
			xIntersection = x3;
			yIntersection = x3 + yIntercept1;
			if (getCos(x1 - xIntersection, y1 - yIntersection, x2 - xIntersection, y2 - yIntersection) <= 0 && getCos(x3 - xIntersection, y3 - yIntersection, x4 - xIntersection, y4 - yIntersection) <= 0)
				/*cout << "Intersect at a point ("  << xIntersection << "," << yIntersection << ")";*/fact = true;
			else
				/*cout << "Don't intersect";*/fact = false;
		}
	}
	return 0;
}
