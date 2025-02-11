#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>
#include <fcntl.h>
#include <unistd.h>

int main(int argc, char *argv[])
{
  int nflag = 0, ch, fd = -1;
  char buf[1024];
  size_t len;
  while ((ch = getopt(argc, argv, ":nf:")) != -1)
  {
    switch (ch)
    {
      case 'n':
        nflag = 1;
        break;
      case 'f':
        if (!strcmp(optarg, "-"))
          fd = 0;
        else if ((fd = open(optarg, O_RDONLY, 0)) < 0)
        {
          fprintf(stderr, "catcho: %s: %s\n", optarg, strerror(errno));
          exit(EXIT_FAILURE);
        }
        while ((len = read(fd, buf, sizeof(buf))) > 0)
          write(1, buf, len);
        if (fd != 0)
          close(fd);
        break;
      case '?':
      default:
        fprintf(stderr, "Usage: catcho [-n] [-f FILE] [STRING]\n");
        exit(EXIT_FAILURE);
    }
  }
  for (; optind < argc; optind++)
    printf("%s", argv[optind]);
  if (!nflag)
    putchar('\n');
}
