#include <stdio.h>

int
main(void)
{
  char buf[1024];
  FILE *in, *out;
  
  in = fopen("file.in", "r");
  out = fopen("file.out", "w");
  while (fgets(buf, 1024, in)) {
    fputs(buf, out);
  }
  return 0;
}
