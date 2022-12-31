#ifndef TOKEN_H
#define TOKEN_H

#include "tokentype.h"
#include <string>

class Token
{
  TokenType type;
  std::string lexeme;
  //const 
  int line; 

  Token(TokenType &type, 
        std::string &lexeme, 
        int &line)
    { 
      type = type;
      lexeme = lexeme;
      line = line;
    }

    std:String to_string()
    {
      return "LEXEME BULLSHIT";
    }
        
};

#endif
