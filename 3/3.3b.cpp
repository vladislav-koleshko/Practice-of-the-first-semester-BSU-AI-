//¬ыполнить задани€  2.3, использу€  алгоритм Ђрешето Ёратосфенаї дл€ нахождени€ простых чисел.

#include <iostream>

const int n(10000);

using namespace std;

int main() {

	bool Arr[n];

	for (int i = 0; i < n; i++) {
		Arr[i] = true;
	}

	for (int i = 2; i < n; i++) {
		for (int j = i + 1; j < n; j++) {
			if (Arr[j])
				Arr[j] = j % i != 0;
		}
	}
	// провер€ем сумму цифр и выводим
	for (int i = 1000; i < n; i++) {
		if (Arr[i] && ((i / 100) / 10 + (i / 100) % 10 == (i % 100) / 10 + (i % 100) % 10)) {
			cout << i << endl;
		}
	}
	return 0;
}