#include <stdio.h>

void calc_square(int *res, int val)
{
    return val * val;
}

int main()
{
    int val = 5;
    int res = 0;

    res = calc_square(res, val);
    printf("%d\n", res);
    return 0;
}

