#include <stdio.h>
#include <iostream>
#include <string>

void run(std::string buffer)
{

}

void startShell()
{

  std::string buffer;

  for (;;)
  {
    std::cout << ">> ";

    if (std::getline(std::cin, buffer) == NULL) break;
    else run(buffer);
  }

  std::cout << "\n ";
}


int main(int argc, char *argv[])
{

  if (argc > 2)
  {
    std::cout << "Usage: jcc [file]" << std::endl;
    return -1;
  }

  else if (argc == 2)
  {
    std::cout << "Running file" << std::endl;
  }

  else
  {
    std::cout << "Jihadi-C interpretter version 0.01" << std::endl;
    startShell();
  }
}
