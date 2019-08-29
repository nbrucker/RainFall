#include <stdlib.h>
#include <stdio.h>

int main(int argc, char const **argv)
{
  n();
  return 0;
}

void n(void)
{
  int i;
  char buf[512];

  fgets(buf, 512, stdin);
  printf("%s\n", buf);
  exit(1);
}

void o(void)
{
    system("/bin/sh");
    exit(1);
}
