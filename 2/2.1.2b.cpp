#include <iostream>
#include <cmath>


int main() {
    double number, intPart, fractPart;
    std::cout << "Enter the number: ";
    std::cin >> number;
    int k;
    std::cout << "Enter k: ";
    std::cin >> k;
    int n;
    std::cout << "Enter n: ";
    std::cin >> n;
    if (number < 0)
        return 1;
    fractPart = modf(number, &intPart);
    int digit_k = (int)(number * pow(10, k)) % 10;
    /*std::cout << number << " = " << intPart << " + " << fractPart << "\n";*/
    /*std::cout << "\n" << digit_k;*/
    int sum = 0;
    for (int i = 0; i < n; ++i) {
        fractPart *= 10;
        int digit = (int)fractPart % 10;
        sum += digit;
        fractPart -= digit;
    }
    /*std::cout << "Sum = " << sum;*/
    if (digit_k == sum)
        std::cout << "k equals sum";
    else
        std::cout << "k not equals sum";
    return 0;
}