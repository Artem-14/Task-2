#include <iostream>
#include <cmath>
#include <algorithm>

int main() {
    setlocale(LC_ALL, "rus");

    int a, b, c;
    std::cout << "Введите стороны треугольника a, b, c: ";
    std::cin >> a >> b >> c;

    if ((a >= b + c) || (b >= a + c) || (c >= a + b)) {
        std::cout << "Не треугольник" << std::endl;
    }
    else if (a == b && b == c) {
        std::cout << "Равносторонний" << std::endl;
    } 
    else if ((a == b) || (a == c) || (b == c)) {
        std::cout << "Равнобедренный" << std::endl;
    }
    else {
        std::cout << "Обычный треугольник" << std::endl;
    }

    return 0;
}
