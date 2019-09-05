#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <time.h>

char *tab;

void m(char *file)
{
  int time

  time = time(NULL);
  printf("%s - %d\n", file, time);
}

int main(int argc, char const **argv)
{
  char *ptr[4];
  FILE *file;

  ptr[0] = (char *)malloc(8);
  ptr[1] = (char *)malloc(8);
  ptr[2] = (char *)malloc(8);
  ptr[3] = (char *)malloc(8);
  strcpy(ptr[1], argv[1]);
  strcpy(ptr[3], argv[2]);
  file = fopen("/home/user/level8/.pass", "r");
  fgets(tab, 0x44, file);
  puts("~~");
  return 0;
}
