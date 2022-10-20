#include <iostream>
#include <string>
#include "funcs.h"

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