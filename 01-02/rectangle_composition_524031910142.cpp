#include <iostream>
#include <iomanip>

using namespace std;

class Rectangle {
    friend class Cuboid;
private:
    double length, width;
public:
    Rectangle(double l = 0.0, double w = 0.0): length(l), width(w) {}
    Rectangle(const Rectangle &rec1): length(rec1.length), width(rec1.width) {}
    double calculateArea() { return length * width; }
    double calculate_r_perimeter() { return 2 * (length + width); }
};

class Cuboid {
private: 
    Rectangle rec;
    double height;
public:
    Cuboid(Rectangle rec1, double h): rec(rec1), height(h) {}
    Cuboid(const Cuboid &cub1): rec(cub1.rec), height(cub1.height) {}
    double calculateV() { return rec.calculateArea() * height; }
    double calculate_r_perimeter() { return 2 * rec.calculate_r_perimeter() + 4 * height; }
    double calculateS() { return 2 * (rec.calculateArea() + (rec.length + rec.width) * height); }
};

int main() {
    double l, w, h;
    cout << "Input length and width: ";
    cin >> l >> w;
    Rectangle r(l, w);
    cout << "The area of the rectangle is: " << setprecision(2) << fixed << r.calculateArea() << endl;
    cout << "The perimeter of the rectangle is: " << r.calculate_r_perimeter() << endl;
    cout << "Input height: ";
    cin >> h;
    Cuboid c(r, h);
    cout << "The volume of the cuboid is: " << c.calculateV() << endl;
    cout << "The total surface area of the cuboid is: " << c.calculateS() << endl;
    cout << "The perimeter of the cuboid is: " << c.calculate_r_perimeter() << endl;
    return 0;
}