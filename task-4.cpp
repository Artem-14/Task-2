#include <iostream>
#include <cmath>
#include <algorithm>

int main() {
    setlocale(LC_ALL, "rus");

    int a, b, c;
    std::cout << "Введите стороны a, b, c для проверки условий: ";
    std::cin >> a >> b >> c;

    double x = (a + b - c) / 2.0;
    double y = (a + c - b) / 2.0;
    double z = (b + c - a) / 2.0;

    if (x > 0 && y > 0 && z > 0) {
        std::cout << "Треугольник существует" << std::endl;
    }
    else {
        std::cout << "Треугольник не существует" << std::endl;
    }

    return 0;
}
