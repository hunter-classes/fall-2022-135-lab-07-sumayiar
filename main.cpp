#include <iostream>
#include <string>

int main(){
   //TASK A
    std::string a;

    while (getline(std::cin, a)){
        std::cout << removeLeadingSpaces(a) << std::endl;
    }

    //TASK B
    int b = 0;
    std::cout << "Enter the number of lines of your input: " << std::endl;
    std::cin >> b;
    std::cout << "Enter your input: " << std::endl;
    std::string line;
    int startBraces = 0;
    for (int i = 0; i <= b; i++){
        getline(std::cin, line[i]);
        std::cout << std::endl << "Indented output: " << std::endl << std::endl;
    } 

    for(int i = 1; i <= b; i++){
        int endBraces = countChar(line, '}');
        startBraces -= endBraces;  
        
        for(int j = 0; j < startBraces; j++)
        std::cout << "\t";
        std::cout << line << std::endl;

        int c = countChar(line, '{');
        startBraces += c;
    }
    return 0;
}