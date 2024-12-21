#include <iostream>
#include <cmath>
#include <algorithm>

int main() {
    setlocale(LC_ALL, "rus");

    int k, l, m;
    std::cout << "Введите три целых числа k, l, m: ";
    std::cin >> k >> l >> m;

    if (k % l == 0) std::cout << k << " делится на " << l << std::endl;
    if (k % m == 0) std::cout << k << " делится на " << m << std::endl;
    if (l % k == 0) std::cout << l << " делится на " << k << std::endl;
    if (l % m == 0) std::cout << l << " делится на " << m << std::endl;
    if (m % k == 0) std::cout << m << " делится на " << k << std::endl;
    if (m % l == 0) std::cout << m << " делится на " << l << std::endl;

    return 0;
}
