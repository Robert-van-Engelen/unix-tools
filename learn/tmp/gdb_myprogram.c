#include <stdio.h>

int foo(int);
int bar(int);

int main(int argc, char *argv[])
{
  int a, i;

  for (i = 0; i < argc; i++)
    printf("argv[%d] = %s\n", i, argv[i]);

  a = foo(3);
  printf("foo() returned %d\n", a);

  return 0;
}

int foo(int a)
{
  printf("Executing foo(a=%d)\n", a);

  return bar(a);
}

int bar(int b)
{
  printf("Executing bar(b=%d)\n", b);

  return 2*b;
}
