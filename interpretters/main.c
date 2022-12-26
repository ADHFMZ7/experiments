#include <stdio.h>

void run(char *buffer)
{
  printf("%s", buffer);
}

void startShell()
{
  
  char buffer[2048];   

  for (;;)
  {
    printf(">> ");
    if (fgets(buffer, 2048, stdin) == NULL) break;
    else run(buffer);
  }
  printf("\n");
}


int main(int argc, char *argv[])
{

  if (argc > 2)
  {
    printf("Usage: jcc [file]\n");
    return -1;
  }

  else if (argc == 2)
  {
    printf("Running file\n");
  }

  else
  {
    printf("Jihadi-C interpretter version 0.01\n");
    startShell();
  }
}


