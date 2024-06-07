#include <iostream>
#include <string>
#include <algorithm>

std::string newString(std::string input) {
    std::cout << "4.3" << std::endl;
    std::cout << "Enter your string: ";
    /*getline(std::cin, input);*/
    std::cout << input << std::endl;

    std::string word;
    std::string result;
    std::string separators = " .,:;?!-()";

    for (size_t i = 0; i < input.size(); ++i) {
        if (input[i] != separators[i]) {
            word += input[i];
        }
        else {
            if (word.size() >= 2 && word.substr(word.size() - 2) == "rd") {
                result += word + " ";
            }
            word = "";
        }
    }
    if (word.size() >= 2 && word.substr(word.size() - 2) == "rd") {
        result += word + " ";
    }
    std::cout << "New string: " << result << std::endl;
    return result;
}

std::string consonants(std::string str, char symb) {
    std::cout << "4.1" << std::endl;

    std::cout << "Enter your string: ";
    std::cout << str << std::endl;
    std::cout << "Enter ur symbol: ";
    std::cout << symb;

    std::string str_;
    for (size_t i = 0; i < str.size(); ++i) {
        if (str[i] == symb) {
            str_ = str.insert(i + 1, "!");
        }
        /*std::cout << str_[i];*/
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

    std::cout << consonants << std::endl;
    return consonants;
}

std::string calcHex(int num10) {
    std::cout << "4.2" << std::endl;
    std::cout << "Enter the number: ";
    std::cout << num10 << std::endl;

    std::string hex;
    std::string hex_chars = "0123456789ABCDEF";
    while (num10 != 0) {
        hex = hex_chars[num10 % 16] + hex;
        num10 /= 16;
    }
    std::cout << hex << std::endl;
    return hex;
}

int main() {
    newString("yard bird rd");
    consonants("zaza", 'z');
    calcHex(10);
    return 0;
}