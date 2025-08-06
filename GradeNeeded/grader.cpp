#include <iostream>
#include <cmath>
#include <string>

std::string option;
double labWeight;
double courseWeight;
double passGrade;
double labRN;
double courseworkRN;
double targetGrade;
//[  3(necessaryGrade) - (labWeight)(labmark) - (courseWeight)(courseMark)  ] / [testWeight] = necessaryTest

void calcGrade(double labWeight, double courseWeight, double passGrade, double labRN, double courseworkRN){
    double testWeight = 100 - labWeight - courseWeight;
    double i = (passGrade - (labWeight/100) * labRN - (courseWeight/100) * courseworkRN) / (testWeight/100);
    std::cout << "you need " << i << "%" << " on the test to reach " << passGrade << "%" << " overall" << std::endl;

}

int main(){

    std::cout << "Hello there" << std::endl;
    std::cout << "Would you like to know.. \n\n A - an average grade \n B - how much you need on the test" << std::endl;
    std::cin >> option;

    if(option == "A"){
        std::cout << "Okay i will now calculate what your average grade is" << std::endl;
        std::cout << "gimme a sec this area is still a work in progress...";
    }
    else if(option == "B"){
        std::cout << "Okay i will now calculate how much you need on the test" << std::endl;
        std::cout << "what is the percentage weighting for the lab element of your module?" << std::endl;
        std::cin >> labWeight;
        std::cout << "what is the percentage weighting for the coursework element of your module?" << std::endl;
        std::cin >> courseWeight;
        std::cout << "what percentages do you expect to get on lab and coursework?" << std::endl;
        std::cin >> labRN;
        std::cin >> courseworkRN;
        std::cout << "now what percentage do you want overall?" << std::endl;
        std::cin >> passGrade;

        calcGrade(labWeight, courseWeight, passGrade, labRN, courseworkRN);
/*        
        std::cout << "labWeight is " << labWeight << std::endl;
        std::cout << "courseWeight is" << courseWeight << std::endl;
        std::cout << "passGrade is " << passGrade << std::endl;
        std::cout << "labRN is " << labRN << std::endl;
        std::cout << "courseworkRN is " << courseworkRN << std::endl;
*/

    
    }
    else std::cout << "Please enter either A or B (case sensitive)";

    
    return 0;
}

/*
for average grade
coursework = 20%
test = 70%
labs = 10%

(0.7(test grade) + 0.2(coursework) + 0.1(labs))/3 = necessary grade


{3[necessary grade] - 0.1(labs) - 0.2(coursework)}/0.7 = test grade

[  3(necessaryGrade) - (labWeight)(labmark) - (courseWeight)(courseMark)  ] / [testWeight] = necessaryTest



*/