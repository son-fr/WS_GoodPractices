#include <stdio.h>
#include <stdlib.h>

int* build(int size)
{
    int *tab = malloc(sizeof(int) * size);

    if (tab == NULL)
        return NULL;
    for (int i = 0; i <= size; i++) {
        tab[i] = i;
    }
    return tab;
}

void show(int *tab, int size)
{
    if (size < 0)
        return;
    for (int i = 0; i < size; i++) {
        printf("%d ", tab[i]);
    }
    printf("\n");
}

int main()
{
    int *tab = build(5);
    show(tab, 5);
    free(tab);
    return 0;
}

