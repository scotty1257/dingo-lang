#ifndef LEXER_HPP
#define LEXER_HPP

namespace Dingo 
{
    namespace Lexer 
    {
        template <class _T_C> const void ReadFile(std::string& fileName, std::string& direc, _T_C<std::string>& outputContainer);
        template <class _T> const void ReadTokens(_T<std::string>& textInput);
        template <class _T> const void SeparateTokens(_T<char*>& container);
    }
}


#endif