
void p(char *str)
{
  char buffer[4096];

  puts(" -");
  read(0, buffer, 4096);
  strchr(buffer, "\n");
  strncpy(str, buffer, 20);
}

void pp(char *str)
{
  char str1[20];
  char str2[20];

  p(str1);
  p(str2);
  strcpy(str, str1);
  strcat(str, str2);
}

int main(int argc, char const **argv)
{
  char s[54];

  pp(s);
  puts(s);
  return(0);
}
