#include <string.h>
#include <stdio.h>

void check_buzz(int i)
{
    char *str = NULL;

    memcpy(str, "valgrind", 8);

    printf("USE %s, i said it %d time(s)\n", str, i);
}

int main()
{
    int i;

    for (; i < 9; i++) {
        check_buzz(i);
    }
    return 0;
}
