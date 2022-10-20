#include <iostream>
#include <string>

std::string removeLeadingSpaces(std::string line);
int countChar(std::string line, char c);

std::string removeLeadingSpaces(std::string line){
    std::string endResult; //contains the string that will return unindented
    bool match = true;
    for (int i = 0; i < line.size(); i++){
        if (!(match && isspace(line[i]))){
            endResult += line[i]; //adds elements of the string line to the unindented string "endResult"
            match = false;
        }
    }
    return endResult;
}

int countChar(std::string line, char c){
    int braces = 0;
    for(int i = 0; i < line.length(); i++){
        if(line[i] == c){
            braces++;
        }
    }
    return braces;
}