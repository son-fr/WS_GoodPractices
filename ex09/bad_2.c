#include <stdio.h>

int main()
{
    int sum;
    int tab[3] = {1, 2, 3};

    for (int i = 0; i < 3; i++) {
        sum += tab[i];
    }
    printf("sum = %d\n", sum);
    return 0;
}

