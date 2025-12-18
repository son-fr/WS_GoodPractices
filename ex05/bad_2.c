#include <stdio.h>

void print_first_val(int *array)
{
    if (array == NULL)
        return;

    printf("first = %d\n", array[0]);
}

int main()
{
    int *array = NULL;

    print_first_val(array);
    return 0;
}

