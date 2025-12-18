#include <stdio.h>

int len_str(char *str)
{
    int i = 0;

    while (str[i] != '\0')
        i++;
    return i;
}

int main()
{
    char *msg = "hello";
    int len = len_str(msg);

    printf("len = %d\n", len);
    return 0;
}
