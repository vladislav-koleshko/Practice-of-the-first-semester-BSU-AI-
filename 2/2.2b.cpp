#include <iostream>
#include <cmath>

double taylor_series(double x, double epsilon) {
    double term = 1, sum = 0;
    int i = 0;
    while (std::abs(term) > epsilon) {
        term = pow(-1, i) * pow(x, 2 * i);
        sum += term;
        ++i;
    }
    return sum;
}

int main() {
    double x0 = -0.4, xn = 0.6, dx = 0.1, epsilon = 1e-6;
    for (double x = x0; x <= xn; x += dx) {
        double y = taylor_series(x, epsilon);
        std::cout << "x = " << x << ", y = " << y << std::endl;
    }
    return 0;
}
