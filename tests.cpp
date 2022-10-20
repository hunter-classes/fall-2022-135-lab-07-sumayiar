/*
Author: Sumayia Rashid
Course: CSCI-135
Instructor: Genady Maryash
Assignment: Lab7B

This program countS the number of open and closed { } in it, and keepS track of how many blocks is currently open at the beginning of each line.
*/
#include <iostream>
#include <string>

std::string removeLeadingSpaces(std::string line);
int countChar(std::string line, char c);

std::string removeLeadingSpaces(std::string line){
    std::string endResult = ""; //contains the string that will return unindented
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

//Pseudocode from Tutor IGNORE

//int main() {
  // ? make a variable to track the number of open blocks
  // ? While I can read in the line from cin 
    // ? Use our function to remove leading spaces, save it to a variable

    // ? Check if the first character of line is a '}', 
      // ? subtract one from open blocks

    // ? for however many open blocks,
      // ? print out tabs '\t'
    // ? print out the unindented line

    // ? count the number of times '{' is in the line
    // !use your function!
    // ? add that number to the number of open blocks

    // ? if the first character is not '}'
      // ? count the number of '}' is in the line
      // !use your function!
      // ? subtract that number from the # of open blocks


//}
