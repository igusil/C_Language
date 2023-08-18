#include <stdio.h>

int main (int argc, char *argv[]) {
  
  if(argc < 2)
    printf("number of arguments %d\n", argc);
  puts(argv[1]);
  return 0;
}
