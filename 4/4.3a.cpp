#include <iostream>
#include <string>

int main() {
    std::string input;
    std::cout << "Enter your string: ";
    getline(std::cin, input);

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
    std::cout << result;
    if (word.size() >= 2 && word.substr(word.size() - 2) == "rd") {
        result += word + " ";
    }
    std::cout << result << std::endl;
    return 0;
}
