#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std;

int main() {
	int s, t;
	double x;
	cin >> s >> t >> x;
	/*if (x <= 0 || x == 1 || (s + 1) < 0 && x >= 0 || (s + 1) % 2 == 0 && x < 0) {
		cout << "NET ODZ";
	}
	else {
		double y = (1 + pow(x, t)) / ((log(pow(x, 3))) * sqrt(pow(x, s)+1));
		cout << y << endl;
	}*/
	double y = (1 + pow(x, t)) / ((log(pow(x, 3))) * sqrt(pow(x, s) + 1));
	cout << y;
	return 0;
}