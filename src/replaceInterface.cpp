#include <iostream>

#include<string>
#include "headers\stdStringExtensions.h"
#include "headers\replaceInterface.h"

std::string findAndReplace(std::string input, std::string find, std::string replace){
    std::find_and_replace(&input, find, replace);
    return input;
}