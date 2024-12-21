#include <iostream>
#include <cmath>
#include <algorithm>

int main() {
    setlocale(LC_ALL, "rus");

    double xa1, ya1, xb1, yb1, xc1, yc1, xd1, yd1;
    std::cout << "Введите координаты четырехугольника A(xa, ya), B(xb, yb), C(xc, yc), D(xd, yd): ";
    std::cin >> xa1 >> ya1 >> xb1 >> yb1 >> xc1 >> yc1 >> xd1 >> yd1;

    auto isParallel = [](double x1, double y1, double x2, double y2, double x3, double y3, double x4, double y4) {
        return (y2 - y1) * (x4 - x3) == (y4 - y3) * (x2 - x1);
        };

    bool ab_cd = isParallel(xa1, ya1, xb1, yb1, xc1, yc1, xd1, yd1);
    bool bc_da = isParallel(xb1, yb1, xc1, yc1, xd1, yd1, xa1, ya1);

    if (ab_cd && bc_da) {
        std::cout << "Параллелограмм" << std::endl;
    }
    else if (ab_cd || bc_da) {
        std::cout << "Трапеция" << std::endl;
    }
    else {
        std::cout << "Произвольный четырехугольник" << std::endl;
    }

    return 0; 
}
