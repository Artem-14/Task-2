#include <iostream>
#include <cmath>
#include <algorithm>

int main() {
    setlocale(LC_ALL, "rus");

    int number;
    std::cout << "Введите трехзначное число: ";
    std::cin >> number;

    int sum_of_digits = (number / 100) + (number / 10 % 10) + (number % 10);
    if (sum_of_digits % 3 == 0) {
        std::cout << "Число делится на 3" << std::endl;
    }
    else {
        std::cout << "Число не делится на 3" << std::endl;
    }

    return 0; 
}
