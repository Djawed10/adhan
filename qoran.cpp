#include <stdio.h>
// int main(void)
//{
//   int tab[3] = { 1, 2, 3 };
//  printf("premier element : %d\n", *tab);
//  printf("dexieme element : %d\n",*tab+1);
//   printf("troieme element : %d\n",*tab+2);

void affiche_tableau(int *tab, unsigned taille)
{

    for (unsigned i = 0; i < taille; ++i)
        printf("tab[%u] = %d\n", i, tab[i]);
}

int main(void)

{
    int tab[5] = {16, 4, 18, 44, 13};

    affiche_tableau(tab, 5);

    return 0;
}
