#include <stdlib.h>
#include <stdio.h>

int main(int argc, char const **argv)
{
  v();
  return 0;
}

void v(void)
{
  int i;
  char buf[512];

  fgets(buf, 512, stdin);
  printf("%s\n", buf);
  if (i == 16930116)
  {
    fwrite(stdout, "Wait what?!\n", 12);
    system("/bin/sh");
  }
}
