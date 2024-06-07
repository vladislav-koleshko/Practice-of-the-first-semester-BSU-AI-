#include <iostream>
#include <cmath>

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
    int k = 0;

    if (d >= a) {
        float tmp = a;
        a = d;
        d = tmp; //std::swap(d, a); 
        k++;
    }
    if (d >= b) {
        float tmp = b;
        b = d;
        d = tmp; //std::swap(d, b);
        k++;
    }
    if (d >= c) {
        float tmp = c;
        c = d;
        d = tmp; //std::swap(d, c);
        k++;
    }
    if (c >= a) {
        float tmp = a;
        a = c;
        c = tmp; //std::swap(c, a);
        k++;
    }
    if (c >= b) {
        float tmp = b;
        b = c;
        c = tmp; //std::swap(c, b);
        k++;
    }
    if (b >= a) {
        float tmp = a;
        a = b;
        b = tmp; //std::swap(b, a);
        k++;
    }
    std::cout << a << " " << b << " " << c << " " << d;
    std::cout << "\nNumber of swaps = " << k;
    return 0;
}