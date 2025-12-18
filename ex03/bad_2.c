#include <stdio.h>

int calc_double(int val)
{
    return val * 2;
}

int main()
{
    int val = 3;
    int double_val = calc_double(val);

    printf("%d\n", double_val);
    return 0;
}

