#include <iostream>
#include <string>
#include <fstream>
#include <vector>

int main() {
    std::ifstream input("../input.txt"); // Assumes project is built in "<project-src-dir>/build"

    std::vector<int> values;
    int value;

    if (input.is_open() ) {
        while (input) {
            input >> value;
            for (int v : values) {
                if (v + value == 2020) {
                    std::cout << "Values are: " << v << " and " << value << ". Result: " << v * value << std::endl;
                    return 0;
                }
            }
            values.push_back(value);
        }
    }

    return 1; // Fail. It should find them before this
}
