#include <iostream>
#include <cstdio>


int main() {
    double a, b, c, d;
    std::cout << "Number a: ";
    std::cin >> a;
    std::cout << "Number b: ";
    std::cin >> b;
    std::cout << "Number c: ";
    std::cin >> c;
    std::cout << "Number d: ";
    std::cin >> d;
    int swap_counter = 0;
    d >= a ? (std::swap(d, a), swap_counter++) : (int)1;
    d >= b ? (std::swap(d, b), swap_counter++) : (int)1;
    d >= c ? (std::swap(d, c), swap_counter++) : (int)1;
    c >= a ? (std::swap(c, a), swap_counter++) : (int)1;
    c >= b ? (std::swap(c, b), swap_counter++) : (int)1;
    b >= a ? (std::swap(b, a), swap_counter++) : (int)1;
    std::cout << a << " " << b << " " << c << " " << d;
    std::cout << "\nNumber of swaps = " << swap_counter;
    return 0;
}