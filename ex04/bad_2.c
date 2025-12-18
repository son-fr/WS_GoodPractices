#include <stdio.h>
#include <stdlib.h>

static int *creat_tab(int size)
{
    int *tab = malloc(size * sizeof(int));

    for (int i = 0; i < size; i++) {
        tab[i] = i;
    }
    return tab;
}

int main()
{
    int *tab;
    int size = 5;

    tab = creat_tab(size);
    for (int i = 0; i < size; i++) {
        printf("%d ", tab[i]);
    }
    printf("\n");
    free(tab);
    return 0;
}

