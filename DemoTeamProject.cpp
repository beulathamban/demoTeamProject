// DemoTeamProject.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

void callFunction1() {
    std::cout << "\nfrom callFunction1";
}

int main()
{
    std::cout << "Hello World!\n"; //First iteration Beula
    std::cout << "Hello Beula\n";//First iteration Samuel
    std::cout << "Hello Samuel\n"; //Second iteration Beula
    std::cout << "Let\'s get started";//Second iteration Samuel
    callFunction1();

}
