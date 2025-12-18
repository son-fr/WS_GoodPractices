#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *tmp = NULL;
    int *tab = malloc(3 * sizeof(int));

    if (tab == NULL)
        return 84;
    for (int i = 0; i < 3; i++) {
        tab[i] = i;
    }
    tmp = realloc(tab, 6 * sizeof(int));
    if (tmp == NULL)
        return 84;
    tab = tmp;
    for (int i = 0; i < 6; i++) {
        printf("%d ", tab[i]);
    }
    printf("\n");
    if (tab != NULL)
        free(tab);
    tab = NULL;
    return 0;
}

