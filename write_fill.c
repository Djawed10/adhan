#include<stdio.h>
#include<stdlib.h>
int main()
{
    FILE *ptr = fopen("produit.txt", "w");
    if (ptr == NULL)
    {
        printf("no such file");
        return 0;
    }
}
          
        