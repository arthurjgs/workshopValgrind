#include <string.h>
#include <stdlib.h>
#include <stdio.h>

int main(void)
{
    char *dup = strdup("HelloWolrd");
    char *str = malloc(strlen(dup));

    for (int i = 0; i < strlen(dup); i++)
        str[i] = dup[i];
    str[strlen(dup)] = 0;
    printf("%s\n", str);
    return (0);
}