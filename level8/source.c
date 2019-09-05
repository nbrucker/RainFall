#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

char *auth = NULL;
char *service = NULL;

int main(int argc, char const **argv)
{
  char input[128];

  while(1)
  {
  printf("%p, %p \n", auth, service);
  fgets(input, 128, stdin);
  if (strncmp(input, "auth ", 5) == 0)
  {
    auth = (char *)malloc(4);
    char *str = (input + 5);
    if (strlen(str) != 0)
      strcpy(auth, str);
  }
  if (strncmp(input, "reset", 5) == 0)
  {
    if (auth)
      free(auth)
  }
  if (strncmp(input, "service", 5) == 0)
  {
      service = strdup(input + 7);
  }
  if (strncmp(input, "login", 5) == 0)
  {
    if ((&auth + 32) == &service)
      system("/bin/sh");
    else
      fwrite("Password:\n", 1, 10, stdout);
  }
  return 0;
}
