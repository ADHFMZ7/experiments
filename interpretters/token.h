#ifndef TOKEN_H
#define TOKEN_H

#include "tokentype.h"
#include <string>


template <typename T>
class Token
{
  TokenType type;
  std::string lexeme;
  T literal;
  int line; 

  Token(TokenType &type, 
        std::string &lexeme, 
        T &literal,
        int &line)
    { 
      type = type;
      lexeme = lexeme;
      literal = literal;
      line = line;
    }

    std:String to_string()
    {
      return "LEXEME";
    }
        
};

#endif
