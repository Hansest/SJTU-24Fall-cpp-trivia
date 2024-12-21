#include <iostream>
using namespace std;

struct PointT{
    double x, y;
};

class Circle {
private:
    PointT center;
    double r;
public:
    Circle(double x = 0.0, double y = 0.0, double ra = 0.0): center{x, y}, r(ra) {
        cout << "Construction complete!" << endl;
    }
    ~Circle() {
        cout << "Destruction done!" << endl;
    }
    PointT getO() { return center; }
    double getR() { return r; }
    void setR(double r1) { r = r1; }
    void moveto(double x1, double y1) { center.x = x1, center.y = y1; }
    void display() {
        cout << "The center of circle: (" << center.x << ',' << center.y << ')' << endl
             << "The radius of circle: " << r << endl;
    }
};

int main() {
    double x, y, r;
    cin >> x >> y >> r;
    Circle c1(x, y, r);
    PointT O = c1.getO();
    cout << "The center of circle: (" << O.x << ',' << O.y << ')' << endl
         << "The radius of circle: " << c1.getR() << endl;

    double r1;
    cin >> r1;
    c1.setR(r1);
    cout << "The radius of circle: " << c1.getR() << endl;

    double x1, y1;
    cin >> x1 >> y1;
    c1.moveto(x1, y1);
    O = c1.getO();
    cout << "The center of circle moved to: (" << O.x << ',' << O.y << ')' << endl;

    return 0;
}