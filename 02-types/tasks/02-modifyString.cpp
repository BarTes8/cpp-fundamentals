#include <iostream>
#include <string>

<<<<<<< Updated upstream
void modifyString(std::string& str){
    str.replace(0, 4, "Other");
}

int main() {
    std::string str{"Some string"};
    modifyString(str);
    std::cout << str << '\n';
    return 0;
}
