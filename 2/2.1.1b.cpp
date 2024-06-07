#include <iostream>

int main() {
    int n, k;
    std::cout << "Enter n: ";
    std::cin >> n;
    std::cout << "Enter k: ";
    std::cin >> k;

    bool hasKDigits = false;
    for (int digit = 0; digit <= 9; ++digit) {
        int count = 0;
        int temp = n;
        while (temp > 0) {
            if (temp % 10 == digit) {
                count++;
            }
            temp /= 10;
        }
        if (count == k) {
            hasKDigits = true;
            break;
        }
    }

    if (hasKDigits) {
        std::cout << "Number " << n << " contains" << k << " identical digits." << std::endl;
    }
    else {
        std::cout << "Number " << n << " doesn't contain" << k << " identical digits." << std::endl;
    }

    return 0;
}
