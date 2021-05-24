#include <iostream>
#include <memory>

// TODO: Implement foo()
// It should take shared_ptr to int and assign value 20 to the pointed int.
// It should also display the value of this int and the number of how many pointers are pointing to it - use `use_count()`.
// Display the same information in main() before and after calling foo()

void foo(std::shared_ptr<int> p) {
    std::cout << *std::make_shared<int>(20) << std::endl;
}

void print(std::shared_ptr<int> p){
    std::cout << *p << std::endl;
    std::cout << p.use_count() << std::endl;
}

int main() {
    std::shared_ptr<int> number = std::make_shared<int>(10);
    // display the value under number pointer and use_count() of it
    print(number);
    foo(number);
    print(number);
    // display the value under number pointer and use_count() of it

    return 0;
}
