#include <iostream>
#include <cmath>
#include <algorithm>

int main() {
    setlocale(LC_ALL, "rus");

    int brick_a, brick_b, brick_c, hole_r, hole_s;
    std::cout << "Введите размеры кирпича (a, b, c) и отверстия (r, s): ";
    std::cin >> brick_a >> brick_b >> brick_c >> hole_r >> hole_s;

    if ((brick_a <= hole_r && brick_b <= hole_s) || (brick_a <= hole_s && brick_b <= hole_r) ||
        (brick_a <= hole_r && brick_c <= hole_s) || (brick_a <= hole_s && brick_c <= hole_r) ||
        (brick_b <= hole_r && brick_c <= hole_s) || (brick_b <= hole_s && brick_c <= hole_r)) {
        std::cout << "Кирпич пройдет" << std::endl;
    }
    else {
        std::cout << "Кирпич не пройдет" << std::endl;
    }

    return 0;
}
