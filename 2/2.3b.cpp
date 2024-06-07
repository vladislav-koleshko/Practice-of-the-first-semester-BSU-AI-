// ���� ����������� ����� n. ����� �������� ������� ����� ������� n, ������������� ������ �������
#include <iostream>
#include <cmath>

int main() {
    int n;
    std::cout << "Enter n: ";
    std::cin >> n;
 // ���������� ������ 10-�� �� n
    for (int i = 10; i < n; i += 10) {
        int primes[10] = { 0 };
        int count = 0;
// ��������� ������� �� ����� (������� �� ���� � �������)
        for (int j = i; j < i + 10; j++) {
            bool prime = true;
            for (int k = 2; k <= sqrt(j); k++) {
                if (j % k == 0) {
                    prime = false;
                    break;
                }
            }
            if (prime) {
                primes[count] = j;
                count++;
            }
        }
// ���� � ������� 4 ������� ����� - �������
        if (count == 4) {
            for (int l = 0; l < count; l++) {
                std::cout << primes[l] << ' ';
            }
            std::cout << '\n';
        }
    }
    return 0;
}
