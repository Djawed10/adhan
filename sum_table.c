#include <stdio.h>
#include <conio.h>
#include <math.h>
 int main()
{
   const int count = 0;
    int somme, i;

    int T[] ={};// {1, 5, 6, 9, 8};

     somme = 0;
      for (i = 0; i < count; i++)
         somme = somme + T[i];

     printf("la somme des elemnt des tabllau est: %d\n", somme);

      somme=0;
      i=0;
    while(i<count){
      somme=somme+T[i];

       i++;
     }
     printf("la somme des element de tabllau est %d \n:", somme);

    i = 0;
    somme = 0;
    somme = somme + T[i];
    do
    {
       somme = somme + T[i]; 
        i = 0;
       printf("la somme des element de tabllau est %d \n:", somme);
        i++;
    } while (i < count);
  printf("la somme des element de tabllau est %d \n:", somme);




    return 0;
}



