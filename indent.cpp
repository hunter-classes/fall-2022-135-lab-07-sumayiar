/*
Author: Sumayia Rashid
Course: CSCI-135
Instructor: Genady Maryash
Assignment: Lab7B

This program countS the number of open and closed { } in it, and keepS track of how many blocks is currently open at the beginning of each line.
*/
#include <iostream>
#include <string>

int countChar(std::string line, char c);

int countChar(std::string line, char c){
    int braces;

    for(int i = 0; i < line.length(); i++){
        if(line[i] == c){
            braces++;
        }
    }
    return braces;
}

int main(){
    std::string a;
    char b;

    std::cout << countChar(a,b) << std::endl;
    return 0;
}