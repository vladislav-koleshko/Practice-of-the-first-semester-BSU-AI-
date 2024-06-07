// laboratory work.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
#include <iostream>
#include <cstdio>
#include <cmath>

int func(float x, float y, int r) {
	std::cout << "Enter 'x': ";
	std::cin >> x;
	std::cout << "Enter 'y': ";
	std::cin >> y;
	std::cout << "Enter 'R': ";
	std::cin >> r;
	/*std::cout << abs(x - r);*/
	if (y < 0.0) {
		if (x <= r) {
			float ch = pow((r - x), 2) + pow(y, 2);
			if (ch <= pow(r, 2)) {
				std::cout << "YES";
				return 0;
			}
			else {
				std::cout << "NO";
			}
		}
		else {
			std::cout << "NO";
			return 0;
		}
	}
	else if (y > 0.0) {
		if (x >= -r) {
			float ch = pow((-r - x), 2) + pow(y, 2);
			if (ch <= pow(r, 2)) {
				std::cout << "YES";
				return 0;
			}
			else
				std::cout << "NO";
		}
		else
			std::cout << "NO";
	}
	else if (y == 0.0 && abs(r - x) >= r || abs(r - x) <= r) {
		float ch = pow((-r - x), 2) + pow(y, 2);
		if (ch <= pow(r, 2)) {
			std::cout << "YES";
			return 0;
		}
		else
			std::cout << "NO";
	}
}

int main() {
	func(-1, 0, 1);
	return 0;
}
// -1 0 1 test
