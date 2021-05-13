#include <iostream>
#include <vector>
<<<<<<< Updated upstream
=======
#include <list>
>>>>>>> Stashed changes

// Implement createSortedList
// add proper include :)

<<<<<<< Updated upstream
=======
/*std::list<int> createSortedList(const std::vector<int>& vec){
    std::list<int> list(vec.begin(), vec.end());
    list.sort();
    return list;
}*/

/*std::list<int> createSortedList(const std::vector<int>& vec){
    std::list<int> list;
    for(auto el : vec){
        list.push_back(el);
    }
    list.sort();
    return list;
}*/
std::list<int> createSortedList(const std::vector<int>& vec){
    std::list<int> list;
    list.insert(list.begin(), vec.begin(), vec.end());
    list.sort();
    return list;
}

std::list<int> createSortedList(const std::vector<int>& vec){
    std::list<int> list;
    list.assign(vec.begin(), vec.end());
    list.sort();
    return list;
}




>>>>>>> Stashed changes
int main() {
    std::vector<int> vec{2, 3, 4, 1, 6, 5, 8, 7, 9, 0};
    auto list = createSortedList(vec);

    for (const auto& el : list)
        std::cout << el << " ";

    return 0;
}
