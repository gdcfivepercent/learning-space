#include <unistd.h>

int
main ()
{
  char buf[128];
  int nread;
  
  nread = read(0, buf, 128);
  
  if (nread == -1) {
    write(2, "A read error has occurred\n", 26);
  }

  if ((write(1, buf, nread)) != nread) {
    write(2, "A write error has occurred\n", 27);
  }
  
  return 0;
}
