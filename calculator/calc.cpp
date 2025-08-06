#include <iostream>
#include <string>


int main(){
    std::cout << "Give me two numbers" << std::endl;

    std::string input1{}, input2{};
    std::cin >> input1;
    std::cin >> input2;

    std::cout << input1 << " and " << input2 << " are your two numbers" << std::endl;



    return 0;
}