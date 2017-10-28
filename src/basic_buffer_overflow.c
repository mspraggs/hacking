#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(int argc, char* argv[])
{
  char buffer[512];

  if (argc != 2) {
    printf("Usage: %s <string>\n", argv[0]);
    return EXIT_FAILURE;
  }
  
  strcpy(buffer, argv[1]);

  printf("Your string: \"%s\"\n", buffer);
}
