#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[])
{
  if (argc < 2)
    fprintf(stderr, "Usage: ch1_demo_readable FILE\n");
  else
  {
    FILE *fd = fopen(argv[1], "r");
    if (fd)
    {
      fclose(fd);
      exit(EXIT_SUCCESS);
    }
  }
  exit(EXIT_FAILURE);
}
