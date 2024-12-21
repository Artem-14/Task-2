#include <iostream>
#include <cmath>
#include <algorithm>

int main() {
    setlocale(LC_ALL, "rus");

    int a, b, c;
    std::cout << "Введите стороны треугольника для определения типа углов: ";
    std::cin >> a >> b >> c;

    if ((a >= b + c) || (b >= a + c) || (c >= a + b)) {
        std::cout << "Не треугольник" << std::endl;
    }
    else {
        int sides[] = { a, b, c };
        std::sort(sides, sides + 3);
        int a2 = sides[0] * sides[0], b2 = sides[1] * sides[1], c2 = sides[2] * sides[2];

        if (a2 + b2 == c2) {
            std::cout << "Прямоугольный" << std::endl;
        }
        else if (a2 + b2 > c2) {
            std::cout << "Остроугольный" << std::endl;
        }
        else {
            std::cout << "Тупоугольный" << std::endl;
        }
    }

    return 0;
}
