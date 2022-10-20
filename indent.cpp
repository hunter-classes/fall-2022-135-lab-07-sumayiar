/*
Author: Sumayia Rashid
Course: CSCI-135
Instructor: Genady Maryash
Assignment: Lab7B

This program countS the number of open and closed { } in it, and keepS track of how many blocks is currently open at the beginning of each line.
*/
#include <iostream>
#include <cctype>
#include <string>

std::string removeLeadingSpaces(std::string line);
int countChar(std::string line, char c);

int countChar(std::string line, char c){
    int a = 0; //counts char in line
    for(int i = 0; i < line.length(); i++){
        if(line[i] == c){
            a++;
        }
    }
    return a;
}

std::string removeLeadingSpaces(std::string line){
  int index = 0;
    while (isspace(line[index])){
      index++;
    }
    std::string endResult;
    endResult = line.substr(index);
    return endResult;
}

int main(){
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
    
    







