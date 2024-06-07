#include <iostream>
#include <Windows.h>
#include <cmath>
#include <math.h>

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    int x1, x2, x3, y1, y2, y3, x, y, S, a, b, c, p;
    std::cin >> x1 >> x2 >> x3 >> y1 >> y2 >> y3 >> x >> y;
    a = sqrt(pow((x2 - x1), 2) + pow((y2 - y1), 2));
    b = sqrt(pow((x3 - x2), 2) + pow((y3 - y2), 2));
    c = sqrt(pow((x1 - x3), 2) + pow((y1 - y3), 2));
    p = (a + b + c) / 2;
    S = sqrt(p * (p - a) * (p - b) * (p - c));
    //std::cout << a << " " << b << " " << c << " " << p << " " << S; test
    if ((x == x1 || x == x2 || x == x3) && (y == y1 || y == y2 || y == y3))
        std::cout << "Принадлежит";
    else
        std::cout << "Не принадлежит";
    return 0;
}