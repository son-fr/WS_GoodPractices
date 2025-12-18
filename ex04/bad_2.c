#include <stdio.h>
#include <stdlib.h>

static int *creat_tab(int size)
{
    int *tab = malloc(size * sizeof(int));

    if (tab == NULL)
        return NULL;
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
    if (tab != NULL)
        free(tab);
    tab = NULL;
    return 0;
}

