#ifndef SCANNER_H
#define SCANNER_H

#include <vector>

class Scanner
{

  Scanner(const std::string &Ssource)
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

  void scanToken()
  {
    
  }

  std::string source;
  std::vector<Token> tokens;
  int start {0};
  int current {0};
  int line {1};

};



#endif
