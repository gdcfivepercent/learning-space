#include <stdio.h>

int main(void)
{
    typedef union user {
        char *username;
        int uid;
    } user_u;

    user_u foo;

    foo.username = "gdcfivepercent";
    printf("User is %s\n", foo.username); // correct
    printf("User is %d\n", foo.uid); // unexpected output

    foo.uid = 5011;
    // printf("User is %s\n", foo.username); // seg-err
    printf("User is %d\n", foo.uid); // correct

    return 0;
}
