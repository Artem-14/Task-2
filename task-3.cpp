#include <iostream>
#include <cmath>
#include <algorithm>

int main() {
    setlocale(LC_ALL, "rus");

    int a, b, c;
    double xa, ya, xb, yb, xc, yc;
    std::cout << "Введите координаты вершин треугольника A(xa, ya), B(xb, yb), C(xc, yc): ";
    std::cin >> xa >> ya >> xb >> yb >> xc >> yc;

    auto distanceSquared = [](double x1, double y1, double x2, double y2) {
        return pow(x2 - x1, 2) + pow(y2 - y1, 2);
        };

    double a2 = distanceSquared(xb, yb, xc, yc);
    double b2 = distanceSquared(xa, ya, xc, yc);
    double c2 = distanceSquared(xa, ya, xb, yb);
    double sides[] = { a2, b2, c2 };
    std::sort(sides, sides + 3);

    if (sides[0] + sides[1] == sides[2]) {
        std::cout << "Прямоугольный" << std::endl;
    }
    else if (sides[0] + sides[1] > sides[2]) {
        std::cout << "Остроугольный" << std::endl;
    }
    else {
        std::cout << "Тупоугольный" << std::endl;
    }
 
    return 0;
}
