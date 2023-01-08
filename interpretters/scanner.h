#ifndef SCANNER_H
#define SCANNER_H

#include <vector>

class Scanner
{

  Scanner(const std::string &source)
  {
    source = source;
  }

  std::vector<Token> scanTokens()
  {
    while (!isAtEnd())
    {
      start = current;
      scanToken();
    }
    tokens.push_back(Token(EOF, "", line));
  }


private:

  bool isAtEnd() const { return current >= source.length(); }

  char advance()
  {
    return source[current];
  }

  void addToken(TokenType type)
  {
    addToken(type, )
  }

  void scanToken()
  {
    char
    switch ()
    {
       
      case '(':
        


    }

  }

  std::string source;
  std::vector<Token> tokens;
  int start {0};
  int current {0};
  int line {1};

};



#endif
