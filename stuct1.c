#include <stdio.h>
#include <string.h>
struct produit
{
    char nom_de_produit[100];
    char code_barre[100];
    float prix;
};

int main()
{
    int i;
    struct produit produites[100];

    FILE *ptr = fopen("produit.txt", "r");
    if (ptr == NULL)
    {
        printf("no such file");
        return 0;
    }
    char buf1[100];
    char buf2[100];
    char buf3[100];
    fscanf(ptr, "%s %s %s\n", buf1, buf2, buf3);
    printf("%s%s%s", buf1, buf1, buf3);

    char nom_de_produit[100];
    char code_barre[100];
    float prix;
    int produit_count = 0;

    while (fscanf(ptr, "%s %s %f ", nom_de_produit, code_barre, &prix) == 3)
    {
        strcpy(produites[produit_count].nom_de_produit, nom_de_produit);
        strcpy(produites[produit_count].code_barre, code_barre);
        produites[produit_count].prix = prix;

        produit_count++;
    }

    fclose(ptr);

    while (1)
    {
        char code_barre2[100];
        printf(" donner le code barre de produit : ");
        scanf("%s", &code_barre2);

        for (i = 0; i < produit_count; i++)
        {

            char *htr = strstr(produites[i].code_barre, code_barre2);
            if (htr != NULL)
            {
                printf("la sous chain : %s a ete trouver dans la chain : %s , donc :\n", code_barre2, produites[i].code_barre);

                printf("ce produit est %s est sont prix est %.2f DA\n", produites[i].nom_de_produit, produites[i].prix);
            }
            /*else
            {
                printf("ce code barre n'existe pas donc le produit meme\n");
            }*/
        }//for

    
    }// while
    return 0;
}
