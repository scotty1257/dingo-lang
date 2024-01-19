#include "Lexer.hpp"

#include <fstream>
#include <iostream>
#include <vector>
#include <string>
#include <ccstring>
#include <iomanip>


template <class _T_C>
const void ReadFile(std::string& fileName, std::string& direc, _T_C<std::string>& outputContainer)
{
    std::ifstream inputFile;
    std::string fileNamePath = direc + fileName;
    inputFile(fileNamePath);

    std::string line = "";
    while (std::getline(inputFile, line))
    {
        outputContainer.push_back(line);
    }    
}

template <class _T>
const void ReadTokens(_T<std::string>& textInput, _T<char*>& tokensOutput)
{
    const char* delimeters = "! +- (*)";;
    std::for_each(textInput.begin(), text_input.end(), 
    [](std::string& s){
        char * input = s.data();
        char * token = std::strtok(s, delimeters);
        while (token)
        {
            tokensOutput.push_back(token);
            token = std::strtok(nullptr, delimeters);
        }
    });
}

template <class _T>
const void SeparateTokens(_T<char*>& container)
{

}

int main(int argc, char** argv)
{

    return 0;
}