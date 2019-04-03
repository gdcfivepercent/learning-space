#include <unistd.h>
#include <sys/stat.h>
#include <fcntl.h>

#define BUFSIZ 1024

int
main(void)
{
  char buf[BUFSIZ];
  int in, out;
  int nread;
  
  in = open("file.in", O_RDONLY);
  out = open("file.out", O_WRONLY|O_CREAT, S_IRUSR|S_IWUSR);
  while ((nread = read(in, buf, BUFSIZ)) > 0) {
    write(out, buf, nread);
  }
  return 0;
}
