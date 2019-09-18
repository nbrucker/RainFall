
void greetuser(char *hello, char* name)
{
  strcat(hello, name);
  puts(hello);
}

int main(int argc, char const **argv)
{
  char a[40];
  char b[32];
  char *lang;
  char hello[76];

  if (argc != 3)
    return (0);
  strncpy(a, argv[1], 40);
  strncpy(b, argv[2], 32);
  lang = getenv("LANG");
  if (memcmp(lang, "fi", 2) == 0) {
    hello = "Hyvää päivää ";
  } else if (memcmp(lang, "nl", 2) == 0) {
    hello = "Goedemiddag! ";
  } else {
    hello = "Hello ";
  }
  greetuser(hello, a);
  return (0);
}
