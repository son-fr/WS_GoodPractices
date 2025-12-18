#include <stdio.h>

int len_str(char *str)
{
    int len = 0;

    while (str[len] != '\0')
        len++;
    return len;
}

int main()
{
    char *msg = "hello";
    int len = len_str(msg);

    printf("len = %d\n", len);
    return 0;
}
