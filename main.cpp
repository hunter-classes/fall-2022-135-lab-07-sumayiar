#include <iostream>
#include <string>
#include "funcs.h"

int main(){
   //TASK A
   /*
    std::string a;
    while (getline(std::cin, a)){
        std::cout << removeLeadingSpaces(a) << std::endl;
    }**/
    //TASK B
    int openBraces = 0;
    std::string line; 
    while (getline(std::cin, line)){
        std::string newString;         
        newString = removeLeadingSpaces(line);

            if (newString[0] == '}'){
                openBraces--;
            }
            for (int j = 0; j < openBraces; j++){
            std::cout << "\t";
            }

            std::cout << newString << std::endl;
            int c = countChar(newString, '{');
            openBraces += c;

            if (newString[0] != '}'){ 
                int d = countChar(newString, '}');
                openBraces -= d;
            }
        }
        return 0;  
}