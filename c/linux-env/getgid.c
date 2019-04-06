#include <stdio.h>
#include <unistd.h>

int main(void)
{
  gid_t gid;
  gid = getgid();
  printf("GID is %d.\n", gid);
  return 0;
}
