#include <iostream>

//Personal Namespace for some common string cases, extends the std namespace

namespace std{
    void find_and_replace(std::string* parentString, char findChar, char replaceChar){
        for(int i = 0; i < parentString->length(); i++){
            if((char)std::tolower((*parentString)[i]) == (char)std::tolower(findChar)){
                if((char)std::tolower((*parentString)[i])  != (*parentString)[i]){
                    (*parentString)[i] = (char)std::toupper(replaceChar);
                }else{
                    (*parentString)[i] = (char)std::tolower(replaceChar);
                }
            }
        }
    }
    void find_and_replace(std::string* str, const std::string findString, const std::string replaceString) {
        if(findString.empty())
            return;
        size_t start_pos = 0;
        while((start_pos = (*str).find(findString, start_pos)) != std::string::npos) {
            (*str).replace(start_pos, findString.length(), replaceString);
            start_pos += replaceString.length();
    }
}
}