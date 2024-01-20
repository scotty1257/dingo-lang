#ifndef LEXER_HPP
#define LEXER_HPP

#include <string>

namespace Dingo 
{
    namespace Lexer 
    {
        template <template <T<std::string>>>
        void ReadFile(std::string& fileName, std::string& direc, T<std::string>& outputContainer);

        template <class T>
        void ReadTokens(T<std::string>& textInput);

        template <class T>
        void SeparateTokens(T<char*>& container);
    }
}


#endif