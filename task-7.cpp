#include <iostream>
#include <cmath>
#include <algorithm>

int main() {
    setlocale(LC_ALL, "rus");

    double sphere_r, diag_p, diag_q;
    std::cout << "Введите радиус шара и диагонали отверстия (p, q): ";
    std::cin >> sphere_r >> diag_p >> diag_q;

    if (2 * sphere_r <= sqrt(diag_p * diag_p + diag_q * diag_q)) {
        std::cout << "Шар пройдет" << std::endl;
    }
    else {
        std::cout << "Шар не пройдет" << std::endl;
    }

    return 0; 
}
