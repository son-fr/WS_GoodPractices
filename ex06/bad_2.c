#include <stdio.h>

int compute_average(int tab[], int len_tab)
{
    int result = 0;

    if (tab == NULL)
        return 84;
    if (len_tab == 0)
        return 0;
    for (int i = 0; i < len_tab; i++)
        result += tab[i];
    return result / len_tab;
}

int main()
{
    int tab[4] = {10, 20, 30, 40};
    int moy = compute_average(tab, 4);

    printf("moy = %d\n", moy);
    return 0;
}

