#include <iostream>
#include <string>


int main(){
    std::cout << "What is your name?" << std::endl;

    std::string input{};
    std::cin >> input;

    std::cout << input << ", you are the youngest person ever" << std::endl;

    return 0;
}