#include <iostream>
#include <cstdio>
#include <cmath>

using namespace std;

class Location {
    friend double calculateDis2(Location &, Location &);

private:
    double x, y;
public:
    Location(double xx = 0.0, double yy = 0.0): x(xx), y(yy) {}
    double getX() { return x; }
    double getY() { return y; }
    double calculateDis1(Location &l2) {
        double dx = x - l2.x, dy = y - l2.y;
        return sqrt(dx * dx + dy * dy);
    }
};

double calculateDis2(Location &l1, Location &l2) {
    double dx = l1.x - l2.x, dy = l1.y - l2.y;
    return sqrt(dx * dx + dy * dy);
}

double calculateDis3(Location &l1, Location &l2) {
    double dx = l1.getX() - l2.getX(), dy = l1.getY() - l2.getY();
    return sqrt(dx * dx + dy * dy);
}

int main() {
    double x1, x2, y1, y2;
    cin >> x1 >> y1 >> x2 >> y2;
    Location l1(x1, y1), l2(x2, y2);
    // printf("A(%lf,%lf)\nB(%lf,%lf)\n", l1.getX(), l1.getY(), l2.getX(), l2.getY());
    cout << "A(" << l1.getX() << ',' << l1.getY() << ")\nB(" << l2.getX() << ',' << l2.getY() << ")" << endl;
    printf("calculateDis1(): %lf\n", l1.calculateDis1(l2));
    printf("calculateDis2(): %lf\n", calculateDis2(l1, l2));
    printf("calculateDis3(): %lf\n", calculateDis3(l1, l2));

    return 0;
}