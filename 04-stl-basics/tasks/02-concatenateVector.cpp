#include <iostream>
#include <vector>

<<<<<<< Updated upstream
// Implement concatenateVector.
// It should take 2 vectors and return one which has alternately elements from the first and the other one.
=======
std::vector<int> concatenateVector(const std::vector<int>& vec1, std::vector<int>& vec2){
    std::vector<int> vec3;
    for(int i = 0; i < vec1.size(); i++){
        vec3.push_back(vec1[i]);
        vec3.push_back(vec2[i]);
    }   
    return vec3;
}
>>>>>>> Stashed changes

int main() {
    std::vector<int> vec1 {1, 2, 3, 4, 5};
    std::vector<int> vec2 {11, 12, 13, 14, 15};

    auto vec = concatenateVector(vec1, vec2);
    for (const auto& el : vec) {
        std::cout << el << " ";
    }
    return 0;
}
