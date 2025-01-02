#include <iostream>
#include <iomanip>

class Rectangle {
protected:
    double length, width;
    Rectangle(double l = 0.0, double w = 0.0): length(l), width(w) {}
    Rectangle(const Rectangle &rec1): length(rec1.length), width(rec1.width) {}
    double calculateArea() { return length * width; }
    double calculate_r_perimeter() { return 2 * (length + width); }
};

class Cuboid: public Rectangle {
    double height;
public:
    Cuboid(double l, double w, double h): Rectangle(l, w), height(h) {}
    Cuboid(const Rectangle &rec1, double h): Rectangle(rec1), height(h) {}
    Cuboid(const Cuboid &cub1): Cuboid(Rectangle(cub1.length, cub1.width), cub1.height) {}
    double calculateV() { return calculateArea() * height; }
    double calculate_c_perimeter() { return 2 * calculate_r_perimeter() + 4 * height; }
    double calculateS() { return 2 * (calculateArea() + (length + width) * height); }
};

int main() {
    double l, w, h;
    std::cout << "Input length, width and height:";
    std::cin >> l >> w >> h;
    Cuboid c(l, w, h);
    std::cout << "The volume of the cuboid is: " << std::setprecision(2) << std::fixed << c.calculateV() << std::endl;
    std::cout << "The total surface area of the cuboid is: " << c.calculateS() << std::endl;
    std::cout << "The perimeter of the cuboid is: " << c.calculate_c_perimeter() << std::endl;
    return 0;
}