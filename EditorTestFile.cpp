#include <algorithm>
#include <vector>
#include <sstream>
#include <iostream>
#include <string>
#include <cstring>
#include <iomanip>

#define A_45 567843

const std::string input = "myValue | int = 46\nyourValue | float = 57.0";

template <class T>
void PrintToken(const std::vector<T>& tokenContainer)
{
    for (const auto token : tokenContainer)
    {
        std::cout << "\'" << token << "\'    ";
    }
}

int main()
{
    std::istringstream inputF;
    inputF.str(input);
    std::vector<std::string> lines = {};

    std::string line = "";
    while (std::getline(inputF, line, '\n'))
    {
        lines.push_back(line);
    }

    std::vector<char*> tokenLinear{};
    const char* delimiters = "! +- (*)";
    for (int i = 0; i < lines.size(); i++)
    {
        char* line_idx = lines[i].data();

        char* token = std::strtok(line_idx, delimiters);
        
        while (token)
        {
            tokenLinear.push_back(token);
            token = std::strtok(nullptr, delimiters);
        }
    }

    PrintToken(tokenLinear);
    return 0;
}