#include <iostream>
#include <vector>

std::vector<int> reverseArray(const std::vector<int>& input) {
    std::vector<int> reversed(input.rbegin(), input.rend());
    return reversed;
}

int main() {
    std::vector<int> original = {1, 2, 3, 4, 5};

    std::vector<int> reversed = reverseArray(original);

    // Print reversed array
    for (int num : reversed) {
        std::cout << num << " ";
    }

    return 0;
}