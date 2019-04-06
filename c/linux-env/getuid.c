#include <stdio.h>
#include <unistd.h>

int main(void)
{
  uid_t uid;
  uid = getuid();
  printf("UID is %d\n", uid);
  return 0;
}
