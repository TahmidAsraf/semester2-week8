#include <stdbool.h>
#include <math.h>

#include "shapes.h"

Point makePoint( float x, float y ) {
    Point new;
    // implementation

    Point p;

    p.x = x;
    p.y = y;
    return p;

}

// complete other functions below
// - start with stubs as above
// - compile regularly to test syntax
// - test functions by calling them from main()

Line makeLine (Point P1, Point P2)
{
    Line L;
    L.p[0] = P1;
    L.p[1] = P2;
    return L;

}

Triangle makeTriangle(Point P1, Point P2, Point P3)
{

    Triangle tri;

    tri.p[0] = P1;
    tri.p[1] = P2;
    tri.p[2] = P3;

    return tri;


}


float lineLength (Line L )

{
    float dx = L.p[1].x - L.p[0].x;
    float dy = L.p[1].y - L.p[0].y;

    return sqrt ((dx * dx )+(dy*dy));
}


float triangleArea( Triangle tri)
{
    float x1 = tri.p[0].x, y1 = tri.p[0].y;

    float x2 = tri.p[1].x, y2 = tri.p[1].y;

    float x3 = tri.p[2].x, y3 = tri.p[2].y;

    return fabs((x1 * (y2-y3))+ (x2 *(y3-y1)) + (x3* (y1-y2))) / 2;

}


bool samePoint (Point p1, Point P2)
{
    return fabs(P1.x - P2.x) < 1e-6 && fabs(p1.y - P2.y) < 1e-6;
}

bool pointInLine (Point P , Line L) 

{

    return samePoint (P,L.p[0]) || samePoint(P, L.p[1]);


}

bool pointInTriangle(Point P , Triangle tri)
{
    return samePoint( P , tri.p[0]) || samePoint ( P , tri.p[1]) || samePoint ( P , tri.p[2]);
}