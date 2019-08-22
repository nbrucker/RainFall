#include <stdlib.h>
#include <stdio.h>

int main(int argc, char const **argv)
{
  char buff[76];

  gets(buff);
  return 0;
}

void run(void)
{
  fwrite("Good... Wait what?\n", 1, 19, stdout);
  system("/bin/sh");
}
