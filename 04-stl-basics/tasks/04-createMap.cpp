#include <iostream>
#include <list>
#include <string>
#include <vector>
<<<<<<< Updated upstream

// Implement createMap. It should take a vector and list and
// return a map of merge them as keys from the vector and values from the list

=======
#include <map>

// Implement createMap. It should take a vector and list and
// return a map of merge them as keys from the vector and values from the list
std::map<int, std::string> createMap(const std::vector<int>& vec,
    const std::list<std::string>& list) {
    std::map<int, std::string> map;
    //int s = (vec.size() >= list.size()) ? list.size() : vec.size(); 
    auto size = std::min(vec.size(), list.size());
    auto it = list.begin();
    for (int i = 0; i < size; i++) {
        map.insert({vec[i], *it++});
    }
    return map;
}
>>>>>>> Stashed changes

int main() {
    std::vector<int> vec{1, 2, 3, 4, 5};
    std::list<std::string> list{"One", "Two", "Three", "Four", "Five"};
    auto map = createMap(vec, list);

    for (const auto& pair : map)
        std::cout << pair.first << " | " << pair.second << '\n';

    return 0;
}
