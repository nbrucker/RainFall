#include <stdlib.h>
#include <string.h>

int main(int argc, char const **argv)
{
  if (strcmp(argv[1], "423") == 0)
    system("/bin/sh");
  return 0;
}
