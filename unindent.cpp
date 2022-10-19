/*
Author: Sumayia Rashid
Course: CSCI-135
Instructor: Genady Maryash
Assignment: Lab7A

This program reads input from cin and prints out each input line with leading spaces removed.
*/
#include <iostream>
#include <string>

std::string removeLeadingSpaces(std::string line);

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

int main(){
    std::string a;

    while (getline(std::cin, a)){
        std::cout << removeLeadingSpaces(a) << std::endl;
    }
    return 0;
}