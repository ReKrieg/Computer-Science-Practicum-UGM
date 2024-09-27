#include <iostream>
#include <vector>
#include <string>

int main() {
    std::vector<std::string> fizzBuzzResult;

    // Loop through numbers 1 to 100
    for (int i = 1; i <= 100; ++i) {
        if (i % 3 == 0 && i % 5 == 0) {
            fizzBuzzResult.push_back("FizzBuzz");
        } else if (i % 3 == 0) {
            fizzBuzzResult.push_back("Fizz");
        } else if (i % 5 == 0) {
            fizzBuzzResult.push_back("Buzz");
        } else {
            fizzBuzzResult.push_back(std::to_string(i));
        }
    }

    // Print the result
    for (const auto &item : fizzBuzzResult) {
        std::cout << item << std::endl;
    }

    return 0;
}