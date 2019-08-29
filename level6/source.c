#include <stdlib.h>
#include <stdio.h>
#include <string.h>

void n(void)
{
  system("/bin/sh");
}

void m(void)
{
  puts("Nope");
}

int main(int argc, char const **argv)
{
  char *a;
  void (*b)();

  a = (char*)malloc(64);
  b = malloc(4);
  b = &m;
  strcpy(a, argv[1]);
  (*b)();
  return 0;
}
