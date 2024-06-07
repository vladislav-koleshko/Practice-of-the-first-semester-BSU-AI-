#include <iostream>
#include <string>

int main() {
    std::string input;
    std::cout << "Enter your string: ";
    getline(std::cin, input);

    std::string word;
    std::string result;
    std::string separators = " .,:;?!-()";

    for (size_t i = 0; i < input.size(); ++i) 
        for (size_t j = 0; j < separators.size(); ++j) {
            if (input[i] != separators[j]) {
                word += input[i];
            }
            else
                if (word.size() >= 2 && word.substr(word.size() - 2) == "rd") {
                    result += word + " ";
                }
            word = "";
        }
    
    if (word.size() >= 2 && word.substr(word.size() - 2) == "rd") {
        result += word + " ";
    }
    std::cout << result << std::endl;
    return 0;
}
