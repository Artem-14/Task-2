#include <iostream>
#include <cmath>
#include <algorithm>

int main() {
    setlocale(LC_ALL, "rus");

    int box_a, box_b, box_c, pack_r, pack_s, pack_t;
    std::cout << "Введите размеры коробки (A, B, C) и посылки (R, S, T): ";
    std::cin >> box_a >> box_b >> box_c >> pack_r >> pack_s >> pack_t;

    if ((pack_r <= box_a && pack_s <= box_b && pack_t <= box_c) ||
        (pack_r <= box_a && pack_s <= box_c && pack_t <= box_b) ||
        (pack_r <= box_b && pack_s <= box_a && pack_t <= box_c) ||
        (pack_r <= box_b && pack_s <= box_c && pack_t <= box_a) ||
        (pack_r <= box_c && pack_s <= box_a && pack_t <= box_b) ||
        (pack_r <= box_c && pack_s <= box_b && pack_t <= box_a)) {
        std::cout << "Посылка помещается" << std::endl;
    }
    else {
        std::cout << "Посылка не помещается" << std::endl;
    }

    return 0;
}
