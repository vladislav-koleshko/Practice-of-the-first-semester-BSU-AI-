#include <iostream>
#include <string>

int main() {
	int num10;
	std::cout << "Enter the number: ";
	std::cin >> num10;

	std::string hex;
	std::string hex_chars = "0123456789ABCDEF";
	while (num10 != 0) {
		hex = hex_chars[num10 % 16] + hex;
		num10 /= 16;
	}
	std::cout << hex;
	return 0;
}
// Ќаписать программу перевода целых чисел из дес€тичной системы счислени€ в шестнадцатеричную.


// int main() {
//	int num = 255; 
//	std::stringstream ss;
//	ss << std::hex << num;
//	std::cout << ss.str() << std::endl;
//	return 0;
// }
