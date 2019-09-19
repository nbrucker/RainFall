
int main(int argc, char const **argv)
{
  int a;
  char *buf[66];
  char *buf[65];
  FILE *file;

  file = fopen("/home/user/end/.pass", "r");
  if (argc != 2 || !file)
		return (-1);
  fread(buf, 66, 1, file);
  a = atoi(argv[1]);
  fread(buff, 65, 1, file);
  fclose(file);
  if (strcmp(argv[1], "") == 0)
    execl("/bin/sh", "sh", NULL);
  else
    puts("\n");
  return (0);
}
