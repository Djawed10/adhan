#include <stdio.h>

/*int fun_factoriel(int n);
int fun_factoriel_recur(int n);

int main(){
  int n;
//  while(1){
  printf("\nEntrer la valeure de n : ");
  scanf("%d",&n);
  int result;
  result=fun_factoriel(n);
  int result1 =fun_factoriel_recur(n);
  printf("Le factoriel de %d est : %d / %d",n,result, result1);
//  }

    return 0;
}

int fun_factoriel(int n){
    if(n<0){
        printf("En peux pas calculer le factoriel d'un nombre negatif");

    }
    int result=1;
    for(int i=1;i<=n;i++){
        result*=i;
    }
    return result;
}

int fun_factoriel_recur(int n){
    if(n<1){
        printf("En peux pas calculer le factoriel d'un nombre negatif");
        return 1;
    }
    printf("---> n = %d\n", n);
    return n * fun_factoriel_recur(n-1);
}*/

#include <stdio.h>
#include <string.h>
int main()
{
    FILE *ptr = fopen("produit.txt", "r");
    if (ptr == NULL)
    {
        printf("no such file");
        return 0;
    }

    printf("------> \n");

    char buf1[100];
    char buf2[100];
    char buf3[100];
    fscanf(ptr, "%s %s %s\n", buf1, buf2, buf3);
    printf("%s %s %s\n", buf1, buf1, buf3);

    char code_bare2[100];

    char nom_de_produit[100];
    char code_bare[100];
    float prix;

    while (1)
    {
        printf(" donner le code bare de produit : ");
        scanf("%s", code_bare2);
        while (fscanf(ptr, "%s %s %f ", nom_de_produit, code_bare, &prix) == 3)
        {
            //  printf("--> %s %s %f \n", nom_de_produit,code_bare,prix);

            if (strcmp(code_bare, code_bare2) == 0)
            {
                // printf(" ce produit est %s est sont prix est : %.2f DA\n", nom_de_produit, prix);
                printf("le resultat va aficher dans le fichier 'result_produit.txt'\n");
                FILE *pf = fopen("result_prdouit.txt", "wt+");
                if (pf == NULL)
                {
                    printf("no such file");
                    return 0;
                }
                fprintf(pf, " ce produit est %s est sont prix est : %.2f DA\n", nom_de_produit, prix);

                fprintf(pf, "<!DOCTYPE html>\n");
                fprintf(pf, "<html>\n");
                fprintf(pf, "<body>\n");
                fprintf(pf, "<h2>HTML Table</h2>\n");
                fprintf(pf, "<table>\n");
                fprintf(pf, "<tr>\n");
                fprintf(pf, "<th>Company</th>\n");
                fprintf(pf, "<th>Contact</th>\n");
                fprintf(pf, "<th>Country</th>\n");
                fprintf(pf, "</tr>\n");
                fprintf(pf, " <tr>\n");
                fprintf(pf, "<td>Alfreds Futterkiste</td>\n");
                fprintf(pf, "<td>Maria Anders</td>\n");
                fprintf(pf, "<td>Germany</td>\n");
                fprintf(pf, "</tr>\n");
                fprintf(pf, "<tr>\n");
                fprintf(pf, " <td>Centro comercial Moctezuma</td>\n");
                fprintf(pf, "  <td>Francisco Chang</td>\n");
                fprintf(pf, " <td>Mexico</td>\n");
                fprintf(pf, "</tr>\n");
                fprintf(pf, "<td>Ernst Handel</td>\n");
                fprintf(pf, " <td>Roland Mendel</td>\n");
                fprintf(pf, "<td>Austria</td>\n");
                fprintf(pf, " </tr>\n");
                fprintf(pf, "  <tr>\n");
                fprintf(pf, " <td>Laughing Bacchus Winecellars</td>\n");
                fprintf(pf, " <td>Yoshi Tannamuri</td>\n");
                fprintf(pf, " <td>Canada</td>\n");
                fprintf(pf, " </tr>\n");
                fprintf(pf, " <tr>\n");
                fprintf(pf, " <td>Magazzini Alimentari Riuniti</td>\n");
                fprintf(pf, "<td>Giovanni Rovelli</td>\n");
                fprintf(pf, " <td>Italy</td>\n");
                fprintf(pf, " </tr>\n");
                fprintf(pf, "</table>\n");
                fprintf(pf, "</body>\n");
                fprintf(pf, "</html>\n");
                fclose(pf);
            }
        }
    }

    return 0;
}