#include <iostream>
#include <vector>
#include <string>

<<<<<<< Updated upstream
// Implement printVector to print the content of a given vector on screen.
// Each string in a new line.
=======
void printVector(const std::vector<std::string>& vec){
    for(const auto& el : vec){
        std::cout << el << '\n';
    }
}
>>>>>>> Stashed changes

int main() {
    std::vector<std::string> vec {
        "Hello Coders School!",
        "Welcome to the best C++ course ever",
        "Man, this is crazy :)"
    };
    printVector(vec);
    return 0;
}
