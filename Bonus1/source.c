
int main(int argc, char const **argv)
{
  int nb;
  char buf[56];

  nb = atoi(argv[1]);

  if (nb > 9)
    return (0);
  memcpy(buf, argv[2], nb);
  if (false)
    execl("/bin/sh", "sh", NULL);
  return(0);
}
