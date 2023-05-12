#include <iostream>
#include <ctime>
#include <chrono>

#include<string>
#include "src\headers\stdStringExtensions.h"

int main(){
    std::string name;
    std::string findChar, replaceChar;
    
    std::cout << "Enter text: ";
    std::getline(std::cin, name);

    std::cout << "Text to replace: ";
    std::getline(std::cin, findChar);

    std::cout << "Text to replace with: ";
    std::getline(std::cin, replaceChar);

    auto start = (std::chrono::system_clock::now());
    auto startTime = std::chrono::system_clock::to_time_t(start);


    std::find_and_replace(&name, findChar, replaceChar);
    
    auto end = (std::chrono::system_clock::now());
    auto endTime  = std::chrono::system_clock::to_time_t(start);

    std::cout << name;
    
    std::chrono::duration<double> elapsed_seconds = end-start;
    std::cout << "\nelapsed time: " << elapsed_seconds.count() << "s";
}