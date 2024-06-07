#include <algorithm>
#include <iostream>
#include <string>

int main() {
    std::string str;
    std::cout << "Enter your string: ";
    std::getline(std::cin, str);
    std::cout << "Enter ur symbol: ";
    char symb;
    std::cin >> symb;

    std::string str_;
    for (size_t i = 0; i < str.size(); ++i) {
        if (str[i] == symb) {
            str_ = str.insert(i + 1, "!");
        }
    }
    std::cout << std::endl << str_ << std::endl;

    std::string consonants;
    for (char c : str) {
        if (isalpha(c) && !strchr("aeiouAEIOU", c)) {
            consonants += c;
        }
    }

    // функция strchr(string, char) - поиск первого вхождения символа в строку

    std::sort(consonants.begin(), consonants.end());

    std::cout << consonants;

    return 0;
}
