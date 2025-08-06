#include <iostream>
#include <string>
#include <cmath>


int main(){
    std::cout << "Give me two numbers" << std::endl;


    float input1{}, input2{};
    std::string mather{};
    std::cin >> input1;
    std::cin >> input2;

    std::cout << input1 << " and " << input2 << " are your two numbers" << std::endl;

    std::cout << "Now give me an operator" << std::endl;

    std::cin >> mather;
    float solution;

    if (mather == "+"){
        solution = input1 + input2;
    }
    else if(mather == "-"){
        solution = input1 - input2;
    }
    else if(mather == "/"){
        solution = input1 / input2;
    }
    else if(mather == "*"){
        solution = input1 * input2;
    }  
    else{
        std::cout << "please put in an actual operator mate" << std::endl;
    }

    std::cout << "Your answer is " << solution << std::endl;

    return 0;
}